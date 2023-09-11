/* if else ladder or ladder if */
#include <iostream.h>
#include <conio.h>
/* switch (<control variable>)
   {
   case <value1>: <stmt1>;
		  break;
   case <value2>: <stmt2>;
		  break;
   case <value3>: <stmt3>;
		  break;
   case <value4>: <stmt4>;
		  break;
   default: <stmt5>;
   }
*/
void main()
{
int qc;

clrscr();

cout << " enter qualification code 1-4 : ";
cin >> qc;

switch (qc)
   {
   case 1: cout << "you are an ssc";
	   break;
   case 2: cout << "you are an inter";
	   break;
   case 3: cout << "you are a graduate";
	   break;
   case 4: cout << "you are a post graduate";
	   break;
   default: cout << " no qualification";
   }

getch();
}

