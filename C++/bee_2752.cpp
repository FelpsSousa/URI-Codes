/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 2752.
 * Date: 2024-11-24
 * Version: 1.0
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  char phrase[50] = "AMO FAZER EXERCICIO NO URI";

  printf("<%s>\n", phrase);
  printf("<%30s>\n", phrase);
  printf("<%.20s>\n", phrase);
  printf("<%-20s>\n", phrase);
  printf("<%-30s>\n", phrase);
  printf("<%.30s>\n", phrase);
  printf("<%30.20s>\n", phrase);
  printf("<%-30.20s>\n", phrase);

  return 0;
}