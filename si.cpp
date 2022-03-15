/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to calculate Simple Interest.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{

    int p, t;
    float r, si;
    cout << "Enter the Principal Amount : ";
    cin >> p;
    cout << "Enter the Rate of Interest : ";
    cin >> r;
    cout << "Enter the Time in years : ";
    cin >> t;
    si = (p * r * t) / 100.0;
    cout << "The Simple Interest is " << si << endl;

    return 0;
}