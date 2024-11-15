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
    double a, b, c, media;

    cin >> a;
    cin >> b;
    cin >> c;

    media = (( 2*a ) + ( 3*b ) + ( 5*c )) / 10;

    cout << "MEDIA = ";
    cout << fixed << setprecision(1);
    cout << media << endl;

    return 0;
}