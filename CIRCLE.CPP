#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <dos.h>
#define pi 3.1425

void main()
{  clrscr();
   float radius,area,perimeter;
   cout << "Enter the radius of circle : \n" ;
   cin >> radius;
   area = pi*(radius*radius);
   perimeter = 2*pi*radius;
   cout << "The area of Circle is : " << area <<"\n";
   cout << "The perimeter of Circle is : " << perimeter;
   delay(2000);


}