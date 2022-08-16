#include<stdio.h>
int add(ii)
int ii;
{
    ++ii;
    return(ii);
}
int main()
{
int i=7,k,l;
k=add(++i);
l=add(i++);
printf("i=%d\tk=%d\tl=%d",i,k,l);
return 0;
}