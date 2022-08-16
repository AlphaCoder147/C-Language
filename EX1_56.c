#include<stdio.h>
int main()
{
float a=13.5;
float *b,*c;
b=&a;
c=b;
printf("%d\t%d\t%d\n",&a,b,c);
printf("%d\t%d\t%d\t%d\n",a,*(&a),*b,*c);
return 0;
}