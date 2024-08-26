#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <dos.h>

void main()
{
    clrscr();
    int length , breadth, area,perimeter;
    cout << "Enter the length and breadth of the rectangle..\n ";
    cin >> length >> breadth;
    area  = length * breadth;
    perimeter = 2*(length+breadth);
    cout << "Area = " << area << "mtsq";
    cout << "\nPerimeter = " << perimeter <<"mts";
    delay(5000);
}