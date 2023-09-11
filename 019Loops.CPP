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

while(i<=100)
{
if (i%2==0)
   {
   cout << i <<"  ";
   sum=sum+i;
   }
i++;
}
cout << sum;
getch();
}

