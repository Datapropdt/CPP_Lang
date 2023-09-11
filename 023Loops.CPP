/*
for:
loop will be execute set of statements fixed no of times based on a condition

		    i * tn = i*tn

		   1 * 2 = 2
		   2 * 2 = 4
		   3 * 2 = 6

   for(<variable>=<initial value>;<condition>;<increment>)
   {
   <stmt1>;
   <stmt2>;
   .
   .
   <stmtn>;
   }



*/
#include <iostream.h>
#include <conio.h>

void main()
{
int i=1,tn,r;

clrscr();

cout << "enter table numer ";
cin>>tn;
cout << " enter range "; cin >>r;

for(i=1;i<=r;i++)
{
  cout << i <<" * "<<tn<<" = "<<i*tn<<"\n";
}

getch();
}

