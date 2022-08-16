#include<stdio.h>
float main()
{
   register float r=3.14;
   register double y=3.4;
   printf("r=%f y=%lf", r,y);
}