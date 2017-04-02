#include<stdio.h>
#include<string.h>


void* allocate(int size);

int main()
{
  char *ptr;
  char msg[] = "Hello World";
  ptr=allocate(64);
  printf("%s\n",msg);
  strcpy(ptr,msg);
  printf("%s\n",ptr);




  return 0;
}


