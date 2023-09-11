/*over loading binary operator
C = sum(A,B); functional notation
C = A + B;
*/
#include <iostream.h>
#include <conio.h>
class number
{
int x,y;
public:
void get(int a,int b) {x=a;y=b;}
void show(){ cout << "\n x = "<<x<<" y = "<<y;}
number operator-(number p)
{
number t;
t.x= x - p.x;
t.y= y - p.y;
return t;
}
};
void main()
{
number n1,n2,n3;
n2.get(10,20);
n1.get(30,40);
n3 = n1 - n2;
n1.show();
n2.show();
n3.show();
getch();
}



