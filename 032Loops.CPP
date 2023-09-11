/* when continue encounters the loop will be continued without executing
remaining statements in the loop.
*/
#include <iostream.h>
#include <conio.h>
main()
{
int i;

clrscr();

for(i=1;i<=10;i++)
{
if (i%3==0) continue;
cout << i <<"\n";

}
getch();

}