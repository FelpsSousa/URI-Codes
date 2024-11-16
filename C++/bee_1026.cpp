/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YouTube: @thefelpscode
*/

#include <iostream>

using namespace std;

int main() {
  unsigned int A, B;

  while (cin >> A >> B) {
    unsigned int result = A ^ B;

    cout << result << endl;
  }

  return 0;
}