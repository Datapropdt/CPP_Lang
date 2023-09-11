/* inline functions : normally when a function is called in the program
the control tranfers from main to function and after execution function
control comes back to the next line in the main program. It takes some
time. to save this time the functin can be made as inline.*/
#include <iostream.h>
#include <conio.h>
inline int sum(int a,int b) // inline function
{
return a+b;
}

main()
{
int c;

c=sum(10,20);
cout <<"\n sum = "<<c;
getch();
}