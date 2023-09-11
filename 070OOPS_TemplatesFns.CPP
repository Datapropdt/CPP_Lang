// function template
#include <iostream.h>
template <class T>
void printarray(T *p, int n)
{
for (int i=0;i<n;i++)
    cout <<p[i]<<" ,";
cout <<endl;
}
void main()
{
int a[]={92,65,78,172,26};
float b[]={1.56,23.8,78.9};
long c[]={1111,222222,33333};
char d[]="dharani";
//"sindhu","harshit","charan"};
printarray(a,5);
printarray(b,3);
printarray(c,3);
printarray(d,7);
}

