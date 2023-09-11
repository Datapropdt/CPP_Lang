/* program to write records in binary mode file */
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
/* ofstream - output file stream - to write contents from memory to diskfile*/

ofstream fout("student.bin",ios::binary|ios::app);

student s;

char ch;

while(1)
{
cout <<"\n enter student data ";

s.readdata();
fout.write((char*)&s,sizeof(s));

cout <<"\n any more records y/n ";
fflush(stdin);
ch=getchar();
if (ch!='y') break;
}
fout.close();
}

