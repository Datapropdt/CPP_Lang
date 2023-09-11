/* constructing 2 dimensional arrays:
we can construct matrix variables using the class type objects
*/
#include <iostream.h>
#include <conio.h>
#include <string.h>
class matrix
{
int **p; /* double pointer store the address of a pointer varible
pointer to matrix */
int d1,d2;
public:
matrix(int x,int y);
void getelement(int i,int j,int value)
{
p[i][j]=value;
}
int & putelement(int i,int j) {return p[i][j];}
};
matrix::matrix(int x,int y)
{
d1=x;
d2=y;
p= new int *[d1];
for(int i=0;i<d1;i++)
p[i]=new int[d2]; //create space for each row
}
void main()
{
int m,n;
cout <<"\n enter size of matrix mxn  :  ";
cin>>m>>n;

matrix A(m,n); // matrix object A constructed
cout <<"\n enter matrix elements row by row  :  ";
int i,j,value;

for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
	cin>>value;
	A.getelement(i,j,value);
	}

cout <<"\n";
for(i=0;i<m;i++)
{	for(j=0;j<n;j++)
	{
	cout <<A.putelement(i,j)<<" ";
	}
	cout <<"\n";
}
getch();
}



