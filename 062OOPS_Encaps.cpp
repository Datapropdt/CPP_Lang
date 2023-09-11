/*Encapsulation is an Object Oriented Programming concept that binds together
the data and functions that manipulate the data, and that keeps both safe from
outside interference and misuse. Data encapsulation led to the important OOP
concept of data hiding.
Data encapsulation is a mechanism of bundling the data, and the functions
that use them and data abstraction is a mechanism of exposing only the
interfaces and hiding the implementation details from the user.
*/

#include <iostream.h>
using namespace std;
class Adder{
 public:
 // constructor
 Adder(int i = 0)
 {
 total = i;
 }
 // interface to outside world
 void addNum(int number)
 {
 total += number;
 }
 // interface to outside world
 int getTotal()
 {
 return total;
 };
 private:
 // hidden data from outside world
 int total;
};
int main( )
{

 Adder a;

 a.addNum(10);
 a.addNum(20);
 a.addNum(30);
 cout << "Total " << a.getTotal() <<endl;
 return 0;
}