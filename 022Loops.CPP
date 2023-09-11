/*
do... while(): exit condition checking loop.
loop will be executed minimum 1 time irrespective of the condition

   do
   {
   <stmt1>;
   <stmt2>;
   .
   .
   .
   <stmtn>;
   }
   while (<condition>);

*/
#include <iostream.h>
#include <conio.h>

void main()
{
long int i=1,sum=0;

clrscr();

do
{
  // cout << i <<"  ";
   if (i%10==0)
   sum=sum+i;

i++;
}
while(i<=100);

cout << sum;

getch();
}

