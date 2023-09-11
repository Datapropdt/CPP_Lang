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
int i=1;

clrscr();

while(i<=100)
{
if (i%2==0)
   cout << i <<"\t";
i++;
}
getch();
}

