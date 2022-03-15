/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to convert temperature from celcius to fahrenheit.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{
    float cel, fah;
    cout << "Enter the temperature in celcius : ";
    cin >> cel;
    fah = (cel * 1.8) + 32;
    cout << "Temperature in fahrenheit is " << fah << endl;
    return 0;
}