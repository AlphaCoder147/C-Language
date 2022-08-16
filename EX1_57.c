#include<stdio.h>
int main()
{
static char a[]="BOMBAY";
char*b="BOMBAY";
printf("\n%d%d",sizeof(a),sizeof(b));
return 0;
}