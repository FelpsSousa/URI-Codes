/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// FIBONACCI, QUANTAS CHAMADAS? - PARADIGMAS - NIVEL 4 | +4.7 PONTOS.

/*
  Fibonacci:
  fib(0) = 0
  fib(1) = 1
  fib(n) = fib(n-1) + fib(n-2);
*/

#include <iostream>

using namespace std;

// Funcao recursiva para calcular o numero de Fibonacci e o numero de chamadas.
int fibonacci(int n, int& numCalls)
{
  // Incremenra o numero de chamadas recursivas.
  numCalls++;

  // Caso base 
  if (n == 0)
  {
    return 0;
  }
  if (n == 1)
  {
    return 1;
  }

  // Chamadas recursivas para calcular os valores anteriores.
  return fibonacci(n - 1, numCalls) + fibonacci(n - 2, numCalls); 
}

int main()
{
  int N;
  cin >> N;

  while (N--)
  {
    int X;
    cin >> X;

    int numCalls = -1; // Comeca com -1 para excluir a chamada inicial.
    int result = fibonacci(X, numCalls);

    cout << "fib(" << X << ") = " << numCalls << " calls = " << result << endl;  
  }

  return 0;
}
