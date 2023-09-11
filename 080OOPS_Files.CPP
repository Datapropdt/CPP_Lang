/* program to read specific record from binary mode file */
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
int recno,pos;
cout << " enter record number ";
cin >>recno;
pos=(recno-1)* sizeof(s);

fin.seekg(pos);

cout <<"\n the desired student data is  \n ";

fin.read((char*)&s,sizeof(s));
s.printdata();

cout << fin.tellg();

fin.close();
getch();
}

