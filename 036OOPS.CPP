/* passing objects as arguments to a member function   */
#include <iostream.h>
#include <conio.h>
class number
{
int n;

public:
void get(int a) /* member function with arguments  */
{
n =a;
}
void show()
{
cout <<"\n n =  "<<n;
}

void  sum(number q)
{
n = n + q.n; // here n refers to the n of the object on which we are using
}

};

void main()
{
number n1,n2;

clrscr();

n1.get(10);
n2.get(20);
n1.show();
n2.show();

n2.sum(n1); /* passing object n1 as argument to sum() member function */

cout <<" \n sum of 2 objects ";
n2.show();
getch();
}