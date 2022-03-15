/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to add two number.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum = 0;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    return 0;
}