/* Friend function: normally an object can be used to activate the member
function of that class.to pass the objects of different class to a member
function as arguments the function must be made as friend to both the
classes.*/

#include <iostream.h>
#include <conio.h>
class abc;
class xyz
{
int x;
public:
void getx(int a)
{
x=a;
}
friend void max(abc,xyz);
};

class abc
{
int y;
public:
void gety(int b)
{
y=b;
}
friend void max(abc,xyz);
};

void max(abc m,xyz n)
{
(m.y>n.x)?cout <<"big "<<m.y:cout <<"big = "<< n.x;
}

void main()
{
abc p;
xyz q;

clrscr();
p.gety(10);
q.getx(20);
max(p,q);  // friend function does not require object.
getch();
}

