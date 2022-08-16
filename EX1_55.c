#include<stdio.h>
int junk(i,j)
int *i,j;
{
    *i=*i**i;
    j=j*j;
}
int main()
{
int i=4,j=2;
junk(&i,j);
printf("%d\t%d",i,j);
return 0;
}