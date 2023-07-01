#include <iostream>
#include <vector>
#include <string>

// Estrutura de dados para representar a porca
class Nut {
public:
  std::vector<bool> internalChain; // Cadeia interna da porca

  Nut(const std::vector<bool>& chain) : internalChain(chain) {}
};

// Estrutura de dados para representar o parafuso
class Bolt {
public:
  std::vector<std::vector<bool>> labyrinth; // Labirinto

  Bolt(const std::vector<std::vector<bool>>& maze) : labyrinth(maze) {}
};

// Função para verificar se o quebra-cabeça tem solução
bool hasSolution(const Nut& nut, const Bolt& bolt) {
  int rows = bolt.labyrinth.size();
  int cols = bolt.labyrinth[0].size();

  // Verificar se a cadeia interna da porca tem ponta em cada posição correspondente ao labirinto
  for (int i = 0; i < cols; i++) {
    if (nut.internalChain[i] && !bolt.labyrinth[0][i]) {
      return false;
    }
  }

  // Verificar se a porca pode deslizar pelo labirinto
  for (int row = 1; row < rows; row++) {
    for (int col = 0; col < cols; col++) {
      if (nut.internalChain[col]) {
        bool canSlide = false;

        // Verificar se a porca pode deslizar para cima
        if (row > 1 && bolt.labyrinth[row][col] && bolt.labyrinth[row - 1][col] && bolt.labyrinth[row - 2][col]) {
          canSlide = true;
        }

        // Verificar se a porca pode deslizar no sentido horário
        if (col < cols - 1 && bolt.labyrinth[row][col] && bolt.labyrinth[row][col + 1] && bolt.labyrinth[row - 1][col + 1]) {
          canSlide = true;
        }

        // Verificar se a porca pode deslizar no sentido anti-horário
        if (col > 0 && bolt.labyrinth[row][col] && bolt.labyrinth[row][col - 1] && bolt.labyrinth[row - 1][col - 1]) {
          canSlide = true;
        }

        // Verificar se a porca pode deslizar para baixo
        if (row < rows - 1 && bolt.labyrinth[row][col] && bolt.labyrinth[row + 1][col] && bolt.labyrinth[row + 1][col - 1]) {
          canSlide = true;
        }

        if (!canSlide) {
          return false;
        }
      }
    }
  }

  return true;
}

int main() {
  int rows, cols;
  std::cin >> rows >> cols;

  std::string nutChain;
  std::cin >> nutChain;
  std::vector<bool> nutInternalChain;
  for (char c : nutChain) {
    nutInternalChain.push_back(c == '1');
  }
  Nut nut(nutInternalChain);

  std::vector<std::vector<bool>> labyrinth(rows, std::vector<bool>(cols));
  for (int i = 0; i < rows; i++) {
    std::string row;
    std::cin >> row;
    for (int j = 0; j < cols; j++) {
      labyrinth[i][j] = row[j] == '1';
    }
  }
  Bolt bolt(labyrinth);

  if (hasSolution(nut, bolt)) {
    std::cout << "Y" << std::endl;
  } else {
    std::cout << "N" << std::endl;
  }

  return 0;
}
