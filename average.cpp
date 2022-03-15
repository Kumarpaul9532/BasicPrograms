/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to calculate the average of three subjects.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{
    int sub1, sub2, sub3;
    float avg = 0.0;
    cout << "Enter the marks in first subject : ";
    cin >> sub1;
    cout << "Enter the marks in second subject : ";
    cin >> sub2;
    cout << "Enter the marks in third subject : ";
    cin >> sub3;
    avg = (sub1 + sub2 + sub3) / 3.0;
    cout << "The average of three subject is " << avg << endl;

    return 0;
}