#include<stdio.h>
int a=10, b=20;
int main()
{
    a=b;
    b=10;
    printf("a=%d\nb=%d",a,b);
    return 0;
}