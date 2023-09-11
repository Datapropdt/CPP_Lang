/* program to read records from binary mode file */

#include<fstream.h>
#include <conio.h>
#include <stdio.h>
class student
{
int rno;
char name[20];
public :
void readdata()
{
cout <<"\n enter rno, name ";
cin >>rno>>name;
}
void printdata()
{
cout <<"\n rno = "<<rno <<"\t name = "<<name;
}
};
void main()
{
ifstream fin("student.bin",ios::binary);
student s;
clrscr();
cout <<"\n the student data is  \n ";

while(fin.read((char*)&s,sizeof(s)))
s.printdata();

fin.close();
}

