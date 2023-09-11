/* program to write text in to a disk file */
#include <fstream.h>
void main()
{
ofstream fout("text.txt");
fout << " this is first line";
fout<<"second line";
fout.close();
}