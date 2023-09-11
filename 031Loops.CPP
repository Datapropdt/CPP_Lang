/* when break encounters in a loop the loop will be breaked and comes out of
the loop.*/

#include <iostream.h>
#include <conio.h>
main()
{
int i;

for(i=1;i<=10;i++)
{
if (i==5) break;
cout << i <<"\n";
}

getch();

}