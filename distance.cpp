/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to convert distance from kilometer to meter and centimeter.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{

    float kilo;
    cout << "Enter the distance in kilometer : ";
    cin >> kilo;
    cout << "Distance in metre is : " << kilo * 1000 << endl;
    cout << "Diistance in centimetre is : " << kilo * 1000 * 100 << endl;

    return 0;
}