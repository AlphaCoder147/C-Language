#include<stdio.h>
int main()
{
    int i=10;
    char ch='A';
    float a=3.1472;
    printf("%d%c%f\n",i,ch,a);
    printf("%c%d%f\n",i,ch,a);
    printf("%f%d%c\n",i,ch,a);
    return 0;
}