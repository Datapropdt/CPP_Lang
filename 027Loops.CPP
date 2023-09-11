#include <iostream.h>
/*
1 1
2 2 3
3 4 5 6
4 7 8 9 10
5 11 12 13 14 15
*/
#include <conio.h>

void main()
{
int i=1,n,k=1;

clrscr();

cout << "enter how many rows  ";
cin>>n;

for(i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
  cout <<k++<<" ";

cout<<"\n";
}

getch();
}

