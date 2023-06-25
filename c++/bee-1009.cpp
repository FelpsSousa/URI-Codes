/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   In: https://www.linkedin.com/in/felipeluis-felpssousa/
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string name; 
    double salary, sales, total;
    double percent = 0.15;

    cin >> name;
    cin >> salary;
    cin >> sales;

    total = salary + ( percent * sales );

    cout << "TOTAL = R$ ";
    cout << fixed << setprecision(2);
    cout << total << endl;

    return 0;
}