// function template on user defined data types
#include <iostream.h>
#include <conio.h>
class complex
{
float rp,ip;
public:
complex(float=0.0,float=0.0);
complex operator+(complex&);
friend ostream & operator<<(ostream&,complex&);
};
complex::complex(float a, float b)
{
rp = a;
ip = b;
}
complex complex::operator+(complex &c)
{
complex t;
t.rp = rp + c.rp;
t.ip = ip + c.ip;
return t;
}
ostream& operator<< (ostream & output,complex &c)
{
if (c.ip>=0)
 output<<c.rp<<'+'<<c.ip<<'i'<<endl;
else
 output<<c.rp<<'+'<<c.ip<<'i'<<endl;
return output;
}

template <class T>
T sum(T a,T b)
{
 return a+b;
}
void main()
{
int i1=10,i2=6,i3;
float f1=2.3,f2=7.2,f3;
long l1=123456,l2=11111,l3;
complex c1(1.1f,1.3f),c2(6.3f,5.5f),c3;
i3=sum(i1,i2);
f3=sum(f1,f2);
l3=sum(l1,l2);
c3=sum(c1,c2);
clrscr();
cout << i3<<endl;
cout << f3<<endl;
cout << l3<<endl;
cout << c3<<endl;
}
