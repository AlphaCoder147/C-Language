#include<stdio.h>
int main()
{
    int i=50,j=200;
    float a,b,c;
    a=i*j;
    b=1.0*i/j;
    c=i+j*1.0;
    printf("%f\n%f\n%f",a,b,c);
    return 0;
}