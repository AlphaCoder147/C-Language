#include<stdio.h>
int m;
int main()
{
    auto int i;
    register int j;
    static int k;
    printf("%d\n%d\n%d\n%d",i,j,k,m);
    return 0;
}