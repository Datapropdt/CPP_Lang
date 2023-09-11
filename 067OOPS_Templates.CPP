/* template - generic function that can be used for any data types */
#include <iostream.h>
#include<conio.h>
template <class T>
T sum(T a, T b)
{
return a+b;
}
void main()
{
clrscr();
cout << sum(26,5) << endl;
cout << sum(73.2f,1.3f)<<"\n";
cout << sum(2222,3333);

}
