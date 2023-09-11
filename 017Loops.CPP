/*
while (<condition>)
   {
   stmt1;
   stmt2;
   .
   .
   .
   stmtn;
   }
*/
#include <iostream.h>
#include <conio.h>

void main()
{
int i=1,sum=0;

clrscr();

while(i<=10)
{
sum = sum + i;
i++;
}
cout <<" sum of 1-10 = "<< sum;
getch();
}

