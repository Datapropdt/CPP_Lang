/*inheritance or extending classes: to inherit the traits of an existing class
to a new class. old class is called base class and new class is called inheri
ted or derived class.
Synatx:
class derivedclassname:visibilitymode baseclassname
{
......
......
......
} */
#include <iostream.h>
#include <conio.h>
class A
{
public:
showa(){cout <<" A class\n";}
};
class B:public class A
{
public:
showb(){cout <<"b class "; }
};
void main()
{
A a;
B b;

clrscr();
a.showa();
b.showa(); //inherited
b.showb();
}
