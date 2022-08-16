#include<stdio.h>
int func1(k)
int k;
{
    k++;
    return(k);
}

int main()
{
int k=35,z;
k=func1(k=func1(k=func1(k)));
printf("k=%d",k);
return 0;
}