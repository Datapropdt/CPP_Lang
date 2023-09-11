/*
1         *
2       * *
3     * * *
4   * * * *
5 * * * * *
*/

#include <iostream.h>
#include <conio.h>

void main()
{
int i=1,n,sp;

clrscr();

cout << "enter how many rows  ";
cin>>n;

for(i=1;i<=n;i++)
{
for(sp=n-i;sp>=0;sp--) cout << "  "; /* to print spaces before each line*/
for(int j=1;j<=i;j++)
  cout <<"* ";

cout<<"\n";
}

getch();
}

