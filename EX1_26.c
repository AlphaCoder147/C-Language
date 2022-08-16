#include<stdio.h>
int main()
{
int i;
printf("Enter any number:-");
scanf("%d",&i);
switch(i)
{
    case 1:
    printf("Do");
    break;
    case 2:
    printf("Re");
    break;
    case 3:
    printf("Me");
    break;
    default:
    printf("Fa So La Ti Do");

}
return 0;
}