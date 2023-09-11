/* program to read and print text of a disk file */
#include <fstream.h>
void main()
{
ifstream fin("text.txt");
char ch;
cout << " the file contents are \n";
while(!fin.eof())
{
fin.get(ch);
cout <<ch;
}
fin.close();
}