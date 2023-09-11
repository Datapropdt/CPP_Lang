/* member function with arguments */
#include <iostream.h>
#include <string.h>   /* header file for string functions */
class student
{
int rno;
char name[20];

public:
void get(int a, char s[]) /* member function with arguments  */
{
rno =a;
strcpy(name,s); /*to copy contents one string to another */
}
void show()
{
cout <<"\n rno "<<rno<<"\n name  "<<name;
}
};
void main()
{
student s;
int i;

s.get(10,"ganesh");
s.show();

}