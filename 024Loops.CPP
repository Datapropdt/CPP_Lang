
/*
1 *
2 * *
3 * * *
4 * * * *
5 * * * * *
*/
#include <iostream.h>
#include <conio.h>

void main()
{
int i=1,n;

clrscr();

cout << "enter how many rows  ";
cin>>n;

for(i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
  cout <<"* ";

cout<<"\n";
}

getch();
}

