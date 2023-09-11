/* if else ladder or ladder if */
#include <iostream.h>
#include <conio.h>
void main()
{
float per;

clrscr();

cout << " enter percentage  ";
cin >> per;

if (per>=60)
   cout << " first class";
else if (per>=50)
   cout << " second class";
else if (per>=40)
   cout << " third class";
else
   cout << "fail";

getch();
}

