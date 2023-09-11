/*inheritance or extending classes: to inherit the traits of an existing class
to a new class. old class is called base class and new class is called inheri
ted or derived class.
Synatx:
class derivedclassname:visibilitymode baseclassname
{
......
......
......
}
single inheritence
*/
#include <iostream.h>
#include <conio.h>
class A
{
int a;
public:
int b;
int geta(){return a;}
void getab(){cout <<"\n enter a,b";cin>>a>>b;}
void showab(){cout <<" a= "<<a<<"\t b = "<<b; }
};
class B:public A
{
int c;
public:
void mul(){c =b*geta();}
void showabc()
{
cout <<" a = "<<geta()<<"\n";
cout <<"\t b = "<<b<<"\n";
cout <<"\t c = "<<c;
}
};
void main()
{
B b;

clrscr();
b.getab();
b.mul();
b.showab();
b.showabc();
getch();
}
