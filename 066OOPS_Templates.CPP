/*  functions with same name, same arguments give some ambiguity
this can be overcomed with templates */
#include<iostream.h>
int sum(int a,int b)
{
return a+b;
}
float sum(float a, float b)
{
return a+b;
}
long sum(long a,long b)
{
return a+b;
}
void main()
{
cout << sum(3,4);
cout << sum(3.4,5.5);
cout << sum(345678,98765432);
}
