/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1032.
 * Date: 2024-11-25
 * Version: 1.0
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> generatePrimes(int limit) {
  vector<int> primes;
  vector<bool> isPrime(limit + 1, true);

  isPrime[0] = isPrime[1] = false;

  for (int i = 2; i <= limit; i++) {
    if (isPrime[i]) {
      primes.push_back(i);
      for (int j = i * 2; j <= limit; j += i) {
        isPrime[j] = false;
      }
    }
  }

  return primes;
}

int josephusWithPrimes(int totalPeople) {
  vector<int> primes = generatePrimes(3500);
  vector<int> people;

  for (int i = 1; i <= totalPeople; i++) {
    people.push_back(i);
  }

  int currentIndex = 0;
  int currentPrimeIndex = 0;

  while (people.size() > 1) {
    int step = primes[currentPrimeIndex] - 1;
    currentIndex = (currentIndex + step) % people.size();
    people.erase(people.begin() + currentIndex);
    currentPrimeIndex++;
  }

  return people[0];
}

int main() {
  int totalPeople;

  while (true) {
    cin >> totalPeople;
    if (totalPeople == 0) break;

    cout << josephusWithPrimes(totalPeople) << endl;
  }

  return 0;
}
