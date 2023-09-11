/* relational operator overloading
comparing two objects */
#include <iostream.h>
#include <conio.h>
enum relation {false,true};
class number
{
int p;
public:
void get(int x) {p=x;}
void show(){ cout << "value = "<<p;}
relation operator < (number t)    // relational operator overloading
{
if (p<t.p)
   return true;
else
   return false;
}
};
void main()
{
number n1,n2;
n1.get(55);
n2.get(22);

n1.show();
n2.show();
clrscr();
if (n1 < n2)
   cout << "\n n1<n2";
else
   cout <<"\n n1>n2";

cout <<"\n "<< (20>10);
cout <<"\n "<< (20<10);
getch();
}


