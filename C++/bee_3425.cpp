/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// Brincando com Pedras

#include <iostream>

using namespace std;

// Função para calcular a exponenciação modular
long long powerMod(long long base, long long exponent, long long modulo) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modulo;
        }
        base = (base * base) % modulo;
        exponent /= 2;
    }
    return result;
}

int main() {
    // Leitura dos valores de L e R para cada pilha
    long long L1, R1, L2, R2, L3, R3;
    cin >> L1 >> R1 >> L2 >> R2 >> L3 >> R3;

    // Cálculo das probabilidades de ganhar em cada pilha
    long long prob1 = (R1 - L1 + 1) % 1000000007;
    long long prob2 = (R2 - L2 + 1) % 1000000007;
    long long prob3 = (R3 - L3 + 1) % 1000000007;

    // Cálculo do inverso multiplicativo de 2 (mod 10^9+7)
    long long inv2 = powerMod(2, 1000000007 - 2, 1000000007);

    // Cálculo da resposta final (probabilidade de Alice ganhar)
    long long ans = (((prob1 * prob2) % 1000000007) * prob3) % 1000000007;
    ans = (ans * inv2) % 1000000007;

    // Impressão do resultado
    cout << ans << endl;

    return 0;
}
