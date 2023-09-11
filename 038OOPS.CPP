// defining the member function outside class using ::
// scope resolution operator
#include <iostream.h>
#include <conio.h>
class time
{
int hours;
int minutes;

public:
void gettime(int h,int m) /* member function with arguments  */
{
hours=h;
minutes =m;
}
void showtime(); // declaring member function
void sum(time,time); //declaring member function
};

void time:: showtime() //defining the member function outside class using ::
{                    // scope resolution operator
cout <<"\n hours =  "<< hours;
cout <<"\n minutes = "<< minutes;
}

void  time::sum(time p,time q)
{
minutes = p.minutes + q.minutes; // here n refers to the n of the object on which we are using
hours = minutes/60;
minutes=minutes%60;
hours = hours + p.hours+q.hours;
}


void main()
{
time t1,t2,t3;

clrscr();

t1.gettime(4,80);
t2.gettime(2,20);

t3.sum(t1,t2);

cout << "\n t1 = "; t1.showtime();
cout << "\n t2 = "; t2.showtime();
cout << "\n t3 = "; t3.showtime();

getch();
}