/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

// MINI MARATONA DE CCO 013 EPR/EHD - 2015.

// Roberto e a Sala Desenfreada.

/* Utilizando a Estrutura de Dados, 'unordered_map', que implementa uma tabela de has associativa.
*  Amazenando pares de "chave-valor"de forma que a busca, insercao e remoção de elementos sejam realizadas em tempo medio constante. (O(1)).
*  Em media, independente do número de elementos armazenados.
*/

#include <iostream>
#include <unordered_map> 
#include <string>

using namespace std;

int main()
{
  unordered_map<string, int> count; // Criando um 'unordered_map' para armazenar a contagem de alunos por curso.
  string matricula, curso; // Variaveis para armazenar a matriculus e curso. 
  int n;

  // Lendo o numero de alunos na sala.
  cin >> n;
  
  // Lendo os dados dos alunos.
  for (int i = 0; i < n; i++)
  {
    cin >> matricula >> curso;
    count[curso]++; // Incrementando a contagem para o curso atual.
  }
  
  // Imprimir o numero de alunos por curso.
  cout << "EPR: " << count["EPR"] << endl;
  cout << "EHD: " << count["EHD"] << endl;
  
  //Calculando o número de cursos diferentes.
  int intrusos = n - count["EPR"] - count["EHD"];
  cout << "INTRUSOS: " << intrusos << endl;

  return 0;
}
