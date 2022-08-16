#include<stdio.h>
int main()
{
  /* size of operator gives size of a data type in bytes*/
  char c;
  int a;
  float b;
  printf("bytes occupied by ch=%d\n", sizeof(c));
  printf("bytes occupied by a=%d\n",sizeof(a));
  printf("bytes occupied by b=%d\n",sizeof(b));
  return 0;
}
