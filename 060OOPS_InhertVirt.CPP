/* virtual functions, pointers , polymorphism */
#include <iostream.h>
#include <conio.h>
class A
{
public:
      void disp()
      {
      cout << " \n base display ";
      }
      virtual void show()
      {
      cout << "\n base class show";
      }
};
class B:public A
{
public:
void disp()
{
cout << " \n derived display ";
}
virtual void show()
{
cout << "\n derived show ";
}
};
void main()
{
clrscr();
A a;
B b;

A *bptr;

bptr = &a;

bptr->disp();
bptr->show();

bptr =&b;

bptr->disp();
bptr->show();

}
