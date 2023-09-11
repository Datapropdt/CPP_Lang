/* function overloading or function polymorphism
physical name is same but behaves in different ways based on the arguments
supplied.
*/
#include<iostream.h>
#include <math.h>
#include<conio.h>
int area(int a)
{
return a*a;
}
float area(float a, float b)
{
return a*b;
}
long area(float a,float b,float c)
{
float s=(a+b+c)/2;
return sqrt(s*(s-a)*(s-b)*(s-c));
}
void main()
{
clrscr();
cout << "area of square : "<< area(3)<<"\n";
cout << "area of rectangle : "<< area(3.4,5.5)<<"\n";
cout << "area of triangle : "<< area(3.4,9.8,6.7)<<"\n";
}
