/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to calculate the area of circle.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{

    float radius, area;
    cout << "Enter the radius of circle : ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "The area of circle is " << area << endl;

    return 0;
}