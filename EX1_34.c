#include<stdio.h>
int main()
{
char str1[30],str2[30];
printf("Enter a sentence\n");
scanf("%s",str1);
printf("%s",str1);
fflush(stdin);
printf("\nEnter a sentence\n");
gets(str2);
printf("%s",str2);
return 0;
}