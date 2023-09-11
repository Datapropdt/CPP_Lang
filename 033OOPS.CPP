#include <iostream.h>
#include <conio.h>
class student
{

int rno;
char name[30];

public:
void input()
{

cout << "\n enter rno ";
cin >> rno;
cout << "\n enter name ";
cin >> name;
}

void output()
{
cout << "\n rno = "<<rno;
cout << "\n name = "<<name;
}

};

main()
{
student s; // here student is class and s is object

clrscr();
s.input();  // input member function can be invoked by object s and . operator
s.output();
}

