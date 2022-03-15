/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to calculate Compound Interest.
   IDE        :  VS Code             */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int p, t;
    float r, ci;
    cout << "Enter the Principal Amount : ";
    cin >> p;
    cout << "Enter the Rate of Interest : ";
    cin >> r;
    cout << "Enter the Time in years : ";
    cin >> t;
    ci = p * (pow((1 + r / 100.0), t)) - p;
    cout << "The Compound Interest is " << ci << endl;

    return 0;
}