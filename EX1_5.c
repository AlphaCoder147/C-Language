#include<stdio.h>
int main()
{
    int cent,fh;
    printf("\nEnter temperature in Farenheit");
    scanf("%d",&fh);
    cent=(fh-32)*5/9;
    printf("\nTemperature in Centigrade is:%d",cent);
    return 0;
}