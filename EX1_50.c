#include<stdio.h>
int func1(m)
int m;
{
    m++;
    return(m);
}
int func(m)
int m;
{
    ++m;
    return(m=func1(++m));
}
int main()
{
int k=35,z;
z=func(k);
printf("z=%d",z);
return 0;
}