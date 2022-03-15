/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to swap two numbers using third variable.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, temp;
    
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;

    cout << "\nNumbers before swapping are : " << endl;
    cout << "First number : " << num1 << endl;
    cout << "Second number : " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "\nNumbers after swapping are : " << endl;
    cout << "First number : " << num1 << endl;
    cout << "Second number : " << num2 << endl;

    return 0;
}