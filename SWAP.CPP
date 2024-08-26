#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <dos.h>

void main()
{
  int a , b;
  clrscr();
  cout << "\n Enter two numbers...";
  cin>>a>>b;
  cout<< "\n Before swapping...";
  cout << "\n a = " << a << " and b = " << b;
  b = (a*b)/(a=b);
  cout << "\n After Swapping ..n";
  cout << "\n a = " << a << " and b = " << b;
  delay(5000);
}