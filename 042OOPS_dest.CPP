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
void show()
{
cout << "\n rno = " <<rno<<"\t name = "<<name;
}
~student()
{
cout <<"\n object destroyed";
}
};
void main()
{
student s,t;

s.show();
t.show();
getch();
}