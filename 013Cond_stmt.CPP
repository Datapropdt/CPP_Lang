/* biggest of 3 nos */
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip.h>
void main()
{
int a,b;

clrscr();

int c,big; // dynamic declaration of variable possible in c++

cout << " enter a,b,c values  ";
cin >> a>>b>>c;

if (a>b)
   {
   if (a>c)
       big = a;
   else
       big = c;
   }
else
   {
   if (b>c)
       big = b;
   else
       big = c;
   }

cout << " biggest of "<<a<<"  "<<b<<"  "<<c<<" = "<<big;

getch();
}

