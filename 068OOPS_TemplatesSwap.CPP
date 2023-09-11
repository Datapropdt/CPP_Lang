// swapping of any data type two numbers
#include <iostream.h>
#include <conio.h>
template <class T>
void swap(T &a,T &b)
{
T t;
t=a;
a=b;
b=t;
}

void main()
{
int a=10,b=20;
float c=3.4,d=4.5;
char e='A',f='B';

clrscr();
cout <<"\n values before swapping \n";
cout << "a = "<<a<<"  b = "<<b<<"\n";
cout << "c = "<<c<<"  d = "<<d<<"\n";
cout << "e = "<<e<<"  f = "<<f<<"\n";

cout <<"\n values after swapping \n";

swap(a,b);
swap(c,d);
swap(e,f);

cout << "a = "<<a<<"  b = "<<b<<"\n";
cout << "c = "<<c<<"  d = "<<d<<"\n";
cout << "e = "<<e<<"  f = "<<f<<"\n";
getch();
}
