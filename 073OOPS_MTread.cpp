/*Multithreading is a specialized form of multitasking and a multitasking is the
feature that allows your computer to run two or more programs concurrently. In
general, there are two types of multitasking: process-based and thread-based.

A multithreaded program contains two or more parts that can run concurrently.
Each part of such a program is called a thread, and each thread defines a
separate path of execution.*/


#include <iostream.h>
#include <cstdlib.h>
#include <pthread.h>
using namespace std;
#define NUM_THREADS 5
void *PrintHello(void *threadid)
{
 long tid;
 tid = (long)threadid;
 cout << "Hello World! Thread ID, " << tid;
pthread_exit(NULL);
}
int main ()
{
 pthread_t threads[NUM_THREADS];
 int rc;
 int i;
 for( i=0; i < NUM_THREADS; i++ ){
 cout << "main() : creating thread, " << i << endl;
 rc = pthread_create(&threads[i], NULL,
 PrintHello, (void *)i);
 if (rc){
 cout << "Error:unable to create thread," << rc << endl;
 exit(-1);
 }
 }
 pthread_exit(NULL);
}