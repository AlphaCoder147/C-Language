#include<stdio.h>
float main()
{
    float r,h,V;
    printf("enter radius:- %f");
    scanf("%f %f",&r,&h);
    V= 3.14*r*r*h;
    printf("Volume of cylinder is %f",V);
    return 0;
}