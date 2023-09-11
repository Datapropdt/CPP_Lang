#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
float f,c;
clrscr();
cout<<"enter temp in fahrein heat  : ";
cin>>f;
c=(f-32)*5/9;

cout<<"temp in fahrein heat  : "<<f<<endl<<" temp in celcius = "<<c;
getch();
}