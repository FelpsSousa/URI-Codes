/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// {soma+=i++} até N.

/*
* Para encontrar o valor de k, podemos resolver a seguinte equacao:
* N = (i) + (i+1) + (i+2) + ... + (i+k-1).
* Isso eh equivalente a:
* N = k*i + (1 + 2 + 3 + ... + k-1).
* Sabemos que a soma dos primeiros n numeros naturais eh dada por: S = n*(n+1)/2.
* Portanto, podemos reescrever a equacaoo como:
* N = ki + k(k-1)/2.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
  long long int N;

  while (cin >> N)
  {
    int count = 0;

    // Encontrar os valores de i e k que satisfazem a equacaoo N = k*i + k*(k-1)/2
    // O valor maximo de k pode ser obtido a partir da formula k = (-1 + sqrt(1 + 8*N)) / 2
    // Uma vez que i e k sao inteiros, basta verificar os valores de k no intervalo [1, k_max]
    long long int k_max = (sqrt(1 + 8 * N) - 1) / 2;

    for (long long int k = 1; k <= k_max; k++) {
        // Verificar se existe um valor inteiro para i que satisfaça a equação
        double i = (2 * N - k * (k - 1)) / (2.0 * k);
        if (i == static_cast<int>(i)) {
            count++;
        }
    }

    cout << count << endl;
  }

  return 0;
}
