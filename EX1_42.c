#include<stdio.h>
int main()
{
static char city[20]="Aurangabad";
int i;
while(city[i])
{
printf("%c",city[i++]);
}
return 0;
}