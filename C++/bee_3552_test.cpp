#include <iostream>
#include <vector>

using namespace std;

bool solveMaze(const vector<string>& maze) {
    int rows = maze.size();
    int cols = maze[0].size();

    // Verifica se a porca pode ser movida em linha reta até a cabeça do parafuso
    for (int i = 1; i < rows; i++) {
        if (maze[i][0] == '1') {
            return false;
        }
    }

    // Verifica se a porca encontra obstáculos ao deslizar para baixo
    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < cols; j++) {
            if (maze[i][j] == '1' && maze[i + 1][j] == '1') {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<string> maze(rows);
    for (int i = 0; i < rows; i++) {
        cin >> maze[i];
    }

    bool hasSolution = solveMaze(maze);

    if (hasSolution) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
