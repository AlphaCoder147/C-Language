#include<stdio.h>
int function(j,b)
int j,b;
{
    int c;
    c=j+b;
    return(c);
}

int main()
{
int i=135,a=135,k;
k=function(!++i,!a++);
printf("i=%d\ta=%d\tk=%d",i,a,k);
return 0;
}