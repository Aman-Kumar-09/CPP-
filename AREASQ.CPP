#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <dos.h>

void main()
{
 clrscr();
 int side , area, perimeter;
 cout << "Enter the length of the side of sq. \n";
 cin >> side;
 area = side * side;
 perimeter = 4 * side;
 cout << " Area of Square = " <<area;
 cout << " Perimeter of Square = " <<perimeter;
 delay(5000);
 }
