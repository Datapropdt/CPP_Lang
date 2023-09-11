// returning objects
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
time sum(time,time); //declaring member function
};

void time:: showtime() //defining the member function outside class using ::
{                    // scope resolution operator
cout <<"\n hours =  "<< hours;
cout <<"\n minutes = "<< minutes;
}

time  time::sum(time p,time q)
{
time t;
t.hours=0;t.minutes=0;
cout << " \n p , q objects";
cout<< p.hours << p.minutes;
cout<< q.hours<<q.minutes;
getch();
t.minutes = p.minutes + q.minutes;
t.hours = t.minutes/60;
t.minutes=t.minutes%60;
t.hours = t.hours + p.hours+q.hours;
return t;
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