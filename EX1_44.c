#include<stdio.h>
int areacirc(radius)
float radius;
{
    float a;
    a=3.14*radius*radius;
    printf("a=%f\n",a);
    return (a);
}
int main()
{
int area;
float radius=2.0;
area=areacirc(radius);
printf("area=%f",area);
return 0;
}