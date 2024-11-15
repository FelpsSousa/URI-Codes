/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// Parafusos e Porcas.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        vector<int> screws;
        for (int i = 0; i < N; i++) {
            int X, Y;
            cin >> X >> Y;
            for (int j = X; j <= Y; j++) {
                screws.push_back(j);
            }
        }

        int Num;
        cin >> Num;

        bool found = false;
        for (int i = 0; i < screws.size(); i++) {
            if (screws[i] == Num) {
                cout << "Prateleira " << i << endl;
                found = true;
            }
        }

        if (!found) {
            cout << "Parafuso nao encontrado" << endl;
        }
    }

    return 0;
}
