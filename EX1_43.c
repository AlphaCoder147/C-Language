#include<stdio.h>
int main()
{
static int n[3][2][4]={
    {
        2,1,4,7,
        2,5,8,9
    },
    {
        8,6,4,4,
        2,5,3,5
    },
    {
        2,4,5,6,
        1,9,8,7
    }
};
printf("%d\t%d\t%d",n[2][1][0],n[0][1][2],n[1][0][2]);
return 0;
}