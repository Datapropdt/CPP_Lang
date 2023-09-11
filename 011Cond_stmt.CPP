#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip.h>
void main()
{
int age;

clrscr();

cout << " enter your age ";
cin >> age;

if (age >=18)
   cout << "\n you can vote ";
else
   cout << "\n you cant vote ";

getch();
}

