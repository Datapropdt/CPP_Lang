/*copy constructor*/
#include <iostream.h>
#include <conio.h>
class code
{
int id;
public :
code(){}
code(int a){ id =a;}
code (code &x)
{ id =x.id;}
void show()
{
 cout << "id = " <<id <<"\n";;
}
};
void main()
{
clrscr();
code a(100);
code b(a);
code c =a;
code d;
d=a;
a.show();
b.show();
c.show();
d.show();
getch();
}