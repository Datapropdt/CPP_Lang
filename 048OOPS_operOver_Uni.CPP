/* operator overloading : when we extend the use of operators to objects it
is called operator overloading
we cannto overload :class member access operator,scope resolution operator,
sizeof operator, conditional operator

vector operator+(vector)
vector operator-(vector)
friend vector operator+(vector,vector)
friend vector operator-(vector)
vector operator-(vector &a)
int operator==(vector)
friend int operator==(vector,vector)

overloading unary operator
*/
#include <iostream.h>
#include <conio.h>
class space
{
int x,y,z;
public:
void getdata(int a,int b,int c) {x=a;y=b;z=c;}
void display() {cout <<"\n x = "<<x<<"\n y = "<<y<<"\n z = "<<z;}
void operator-() {x=-x;y=-y;z=-z;}
};
void main()
{
space s;
s.getdata(10,-11,12);
s.display();
-s;
s.display();
getch();
}


