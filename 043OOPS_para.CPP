/*parameterized or argument constructor
when a constructor is given with some arguments or parameters it is called
parameterized of argument constructor */
#include <iostream.h>
#include <conio.h>
#include <string.h>
class student
{
int rno;
char name[20];
public:
student()   // constructor
{
rno=100;
strcpy(name,"revathi");
}

student(int a,char n[])   // constructor
{
rno=a;
strcpy(name,n);
}

void show()
{
cout << "\n rno = " <<rno<<"\t name = "<<name;
}
};
void main()
{
clrscr();
student s;
student t(20,"bhargavi");

s.show();
t.show();
getch();
}