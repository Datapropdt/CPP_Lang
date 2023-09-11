/* hybrid inheritenc
      student
      __|___
     |      |
    marks   sports
      |_____|
	 |
       result
*/
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
class student
{
int rno;
char name[30];
public:
void getdata()
{
cout <<"\n enter rno, name ";
cin>>rno>>name;
}
void showdata()
{
cout <<"\n rno = "<<rno<<"\t name = "<<name;
}
};
class marks:public virtual student
{
float sub1,sub2;
public:
void getmarks()
{
cout <<"\n enter sub1, sub2 ";
cin>>sub1>>sub2;
}
void showmarks()
{
cout <<"\n sub1 = "<<sub1<<"\t sub2 = "<<sub2;
}
float retsub1()
{
return sub1;
}
float retsub2()
{
return sub2;
}

};
class sports:virtual public student  /* virtual keyword is to avoid ambiguity*/
{
float score;
public :
void getscore(){ cout <<"\n enter score "; cin >>score;}
void showscore(){cout <<"\n score = "<<score;}
float retscore(){return score;}
};
class result:public marks, public sports
{
float avg;
public:
void input()
{
getdata();
getmarks();
getscore();
}
void output()
{
showdata();
showmarks();
showscore();
}
void showavg()
{
avg = (retsub1()+retsub2()+retscore())/3;
cout <<"\n avg  = "<<avg;
}
};
void main()
{
clrscr();
result s;
s.input();
//s.getdata();
//s.getmarks();
//s.getscore();
s.output();
//s.showdata();
//s.showmarks();
//s.showscore();
s.showavg();

getch();
}
