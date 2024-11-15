/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// Notas e Moedas

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
 
    double N;
    cin >> N;
    
    int valor = round(N * 100);
    
    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    
    cout << "NOTAS:" << endl;
    for (int nota : notas) {
        int qtd = valor / nota;
        cout << qtd << " nota(s) de R$ " << fixed << setprecision(2) << (nota / 100.0) << endl;
        valor %= nota;
    }
    
    cout << "MOEDAS:" << endl;
    for (int moeda : moedas) {
        int qtd = valor / moeda;
        cout << qtd << " moeda(s) de R$ " << fixed << setprecision(2) << (moeda / 100.0) << endl;
        valor %= moeda;
    }
 
    return 0;
}