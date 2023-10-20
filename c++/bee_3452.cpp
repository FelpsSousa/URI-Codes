/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// Labirinto em Parafuso

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Porca {
public:
  vector<bool> cadeiaInterna; // Representa a parte interna da porca, onde cada elemento indica a presença de uma ponta

  Porca(const vector<bool>& cadeia) : cadeiaInterna(cadeia) {}
};

class Parafuso {
public:
  vector<vector<bool>> labirinto; // Representa o labirinto, onde cada elemento indica a presença de uma parede

  Parafuso(const vector<vector<bool>>& lab) : labirinto(lab) {}
};

bool temSolucao(const Porca& porca, const Parafuso& parafuso) {
  int linhas = parafuso.labirinto.size();
  int colunas = parafuso.labirinto[0].size();

  // Verificar se a cadeia interna da porca tem uma ponta em cada posição correspondente ao labirinto
  for (int i = 0; i < colunas; i++) {
    if (porca.cadeiaInterna[i] && !parafuso.labirinto[0][i]) {
      return false;
    }
  }

  // Verificar se a porca pode deslizar pelo labirinto
  for (int linha = 1; linha < linhas; linha++) {
    for (int coluna = 0; coluna < colunas; coluna++) {
      if (porca.cadeiaInterna[coluna]) {
        bool podeDeslizar = false;

        // Verificar se a porca pode deslizar para cima
        if (linha > 1 && parafuso.labirinto[linha][coluna] && parafuso.labirinto[linha - 1][coluna] && parafuso.labirinto[linha - 2][coluna]) {
          podeDeslizar = true;
        }

        // Verificar se a porca pode deslizar no sentido horário
        if (coluna < colunas - 1 && parafuso.labirinto[linha][coluna] && parafuso.labirinto[linha][coluna + 1] && parafuso.labirinto[linha - 1][coluna + 1]) {
          podeDeslizar = true;
        }

        // Verificar se a porca pode deslizar no sentido anti-horário
        if (coluna > 0 && parafuso.labirinto[linha][coluna] && parafuso.labirinto[linha][coluna - 1] && parafuso.labirinto[linha - 1][coluna - 1]) {
          podeDeslizar = true;
        }

        // Verificar se a porca pode deslizar para baixo
        if (linha < linhas - 1 && parafuso.labirinto[linha][coluna] && parafuso.labirinto[linha + 1][coluna] && parafuso.labirinto[linha + 1][coluna - 1]) {
          podeDeslizar = true;
        }

        if (!podeDeslizar) {
          return false;
        }
      }
    }
  }

  return true;
}

int main() {
  int linhas, colunas;
  cin >> linhas >> colunas;

  string cadeiaPorca;
  cin >> cadeiaPorca;
  vector<bool> cadeiaInternaPorca;
  for (char c : cadeiaPorca) {
    cadeiaInternaPorca.push_back(c == '1');
  }
  Porca porca(cadeiaInternaPorca);

  vector<vector<bool>> labirinto(linhas, vector<bool>(colunas));
  for (int i = 0; i < linhas; i++) {
    string linha;
    cin >> linha;
    for (int j = 0; j < colunas; j++) {
      labirinto[i][j] = linha[j] == '1';
    }
  }
  Parafuso parafuso(labirinto);

  if (temSolucao(porca, parafuso)) {
    cout << "Y" << endl;
  } else {
    cout << "N" << endl;
  }

  return 0;
}
