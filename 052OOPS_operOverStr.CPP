/* over loading string operator
s3 = s1 + s2;
*/
#include <iostream.h>
#include <conio.h>
#include <string.h>
class string
{
char *p;
int len;
public:
string()
{len=0;p=0;}
string(const char *s)
{
len =strlen(s);
p=new char[len+1];
strcpy(p,s);
}
string(const string &s)
{
len = s.len;
p=new char[len+1];
strcpy(p,s.p);
}
~string(){delete p;}
friend string operator+(const string &s,const string &t)
{
string temp;
temp.len = s.len+t.len;
temp.p=new char[temp.len+1];
strcpy(temp.p,s.p);
strcat(temp.p,t.p);
return temp;
}
friend int operator <=(const string &s,const string &t)
{
int m=strlen(s.p);
int n=strlen(t.p);
if(m<=n)
   return(1);
else
	return(0);

}
friend void show(const string s)
{
cout <<s.p;
}
};
int main()
{
clrscr();
string s1="new ";
string s2="york ";
string s3=" delhi";
string t1,t2,t3;
t1=s1;
t2=s2;
t3=s1+s3;
cout <<" \n t1 =";show(t1);
cout <<" \n t2 =";show(t2);
cout <<"\n ";
cout <<"\n t3 = ";show(t3);
cout<<"\n ";
if (t1<=t3)
{
show(t1);
cout <<" smaller than ";
show(t3);
cout <<"\n";
}
else
{
show(t3);
cout <<" smaller than ";
show(t1);
cout <<"\n";
}
return 0;
}





