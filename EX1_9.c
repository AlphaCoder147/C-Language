#include<stdio.h>
int i=100;
int j=200;
int k=300;
int main()
{
    auto int i=10;
    register int j=20;
    static int k=30;
    printf("%d\n%d\n%d",i,j,k);
    return 0;
}
