#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <dos.h>

int getFact( int n);

int  getFact(int n)
{
    if(n == 1 || n == 0)
       { return 1;
       }
       else
       {
	 return n * getFact(n-1);
       }
}

void main()
{
  longDouble num , factorial;
  clrscr();
  cout << "Enter the no. to get its factorial : \n";
  cin >> num;
  cout << "Factorial of the no. is : " << getFact(num);
  delay(4000);

}



