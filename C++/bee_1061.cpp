/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Plataforma URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1061.
 * Date: 2024-11-20
 * Version: 1.0
 */

#include <iostream>
#include <string>

using namespace std;

int convert_to_seconds(int days, int hours, int minutes, int seconds) {
  return seconds + (minutes * 60) + (hours * 3600) + (days * 86400);
}

void convert_from_seconds(int total_seconds, int &days, int &hours, int &minutes, int &seconds) {
    days = total_seconds / 86400;
    total_seconds %= 86400;
    hours = total_seconds / 3600;
    total_seconds %= 3600;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;
}

int main() {
  string temp;
  int start_day, end_day;
  int start_hour, start_minute, start_second;
  int end_hour, end_minute, end_second;

  cin >> temp >> start_day;
  cin >> start_hour >> temp >> start_minute >> temp >> start_second;

  cin >> temp >> end_day;
  cin >> end_hour >> temp >> end_minute >> temp >> end_second;

  int start_in_seconds = convert_to_seconds(start_day, start_hour, start_minute, start_second);
  int end_in_seconds = convert_to_seconds(end_day, end_hour, end_minute, end_second);

  int duration_in_seconds = end_in_seconds - start_in_seconds;

  int days, hours, minutes, seconds;
  convert_from_seconds(duration_in_seconds, days, hours, minutes, seconds);

  cout << days << " dia(s)" << endl;
  cout << hours << " hora(s)" << endl;
  cout << minutes << " minuto(s)" << endl;
  cout << seconds << " segundo(s)" << endl;

  return 0;
}