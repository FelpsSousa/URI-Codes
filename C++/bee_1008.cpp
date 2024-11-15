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
    int number, hours;
    double amount, salary;

    cin     >> number;
    cin     >> hours;
    cin     >> amount;

    salary  = hours * amount;

    cout    << "NUMBER = ";
    cout    << number << endl;
    cout    << "SALARY = U$ ";
    cout    << fixed << setprecision(2);
    cout    << salary << endl;

    return 0;
}