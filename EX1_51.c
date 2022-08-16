#include<stdio.h>
int message()
{
    printf("Only he will survive who is C-fit\n");
}
int main()
{
message();
int c;
printf("c before call=%d\n",c);
c=message();
printf("c after call=%d",c);
return 0;
}