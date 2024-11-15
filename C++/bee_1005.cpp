/*  The Felps Code
*   Tico e Teco: @thefelps.code
*   YT: @thefelpscode     
*/ 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, media;

    cin >> a;
    cin >> b;

    media = ((3.5*a) + (7.5*b)) / 11;

    cout << "MEDIA = ";
    cout << fixed << setprecision(5);
    cout << media;
    cout << endl;

    return 0;
}