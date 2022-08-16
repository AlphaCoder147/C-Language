#include<stdio.h>
int message()
{
    printf("Live and let live\n");
}
int main()
{
int c;
printf("c before call=%d\n",c);
c=message();
printf("c after call=%d\n",c);
return 0;
}