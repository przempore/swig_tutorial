/* File : example.c
  * Created by Glen Berseth
  * Date: Oct 25, 2015
  
  */
#include <time.h>
double My_variable = 3.0;
int fact(int n)
{
 if (n <= 1) return 1;
 else return fact(n-1);
}
int my_mod(int x, int y)
{
 return (x%y);
}
char* get_time()
{
 time_t ltime;	
 time(&ltime);
 return ctime(&ltime);
}