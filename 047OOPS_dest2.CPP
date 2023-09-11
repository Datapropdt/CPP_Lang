/* destructor: is used to destroy the objects created by a constructor.
it is a member function whose name is same as the class name but is preceeded
by a TILDE (~) symbol
*/
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

~student()     // destructor
{
cout <<"\n object destroyed";
}
};
void main()
{
student s,t;

clrscr();
s.show();
t.show();
getch();
}