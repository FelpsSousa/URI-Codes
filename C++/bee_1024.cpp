/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YouTube: @thefelpscode
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string encrypt(string line) {
  int length = line.size();

  for (int i = 0; i < length; i++) {
    if(isalpha(line[i])) {
      line[i] += 3;
    }
  }

  reverse(line.begin(), line.end());

  for (int i = length / 2; i < length; i++) {
    line[i] -= 1;
  }

  return line;
}

int main() {
  int N;
  cin >> N;
  cin.ignore();

  while (N--) {
    string line;
    getline(cin, line);
    cout << encrypt(line) << endl;
  }

  return 0;
}