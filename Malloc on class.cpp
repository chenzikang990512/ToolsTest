#include<stdlib.h>
#include<stdio.h>
int main()
{
    char *p;
    p = (char*)malloc(10);
    p = "Hello";
    printf("%s\n",p);
    return 0;
}