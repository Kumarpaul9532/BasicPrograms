/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to convert temperature from fahrenheit to celcius.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{
    float fah, cel;
    cout << "Enter the temperature in fahrenheit : ";
    cin >> fah;
    cel = (fah - 32) / 1.8;
    cout << "Temperature in celcius is " << cel << endl;
    return 0;
}