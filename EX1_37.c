#include<stdio.h>
int main()
{
int i;
int size=6;
int arr[size];
for(i=1;i<=size;i++)
{
    scanf("\n%d\n",&arr[i]);
    printf("\n%d",arr[i]);
}
return 0;
}