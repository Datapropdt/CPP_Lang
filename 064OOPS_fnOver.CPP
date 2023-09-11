// overloading function templates
#include <iostream.h>
#include <conio.h>
template <class T>
T sum(T a, T b)
{
    return a+b;
}
template <class M>
M sum(M a,M b, M c)
{
return a+b+c;
}
void main()
{
clrscr();
cout << sum(1.1f,2.2f,3.3f)<<endl;
cout << sum(34,45)<<endl;
cout << sum(3.4f,5.5f)<<endl;
cout << sum(1,3,5)<<endl;
}
