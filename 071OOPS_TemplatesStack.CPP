/* class templates */
#include <iostream.h>
#define max 5
#include <stdio.h>
#include <conio.h>
/* can also be defined as const int max=5 */
template <class T>
class stack
{
int top;
T a[max];
public:
    stack();
    void push(T);
    T pop();
};

template <class T>
stack <T>::stack()
{
top = -1;
}
template <class T>
void stack <T>::push(T n)
{
top++;
a[top]=n;
}
template <class T>
T stack <T>::pop()
{
T n;
n=a[top];
top--;
return n;
}
void main()
{
// stack of integers
clrscr();

stack <int> s1;

int n;

for(int i=0;i<5;i++)
{
cout << "\n enter a number "; cin >>n;
s1.push(n);
}

for(i=0;i<5;i++) cout << s1.pop()<<" -> ";

cout << endl << endl;

// stack of characters
stack <char> s2;

char n2;

for(i=0;i<5;i++)
{
cout << "\n enter a character "; cin >>n2;
s2.push(n2);
}

for(i=0;i<5;i++) cout << s2.pop()<<" -> ";

cout << endl << endl;

// stack of doubles
stack <double> s3;

double n3;

for(i=0;i<5;i++)
{
cout << "\n enter a fraction value "; cin >>n3;
s3.push(n3);
}

for(i=0;i<5;i++) cout << s3.pop()<<" -> ";

cout << endl << endl;

getch();
}





