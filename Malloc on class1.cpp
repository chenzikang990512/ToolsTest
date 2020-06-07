#include<string.h>
#include<stdio.h>
#include<malloc.h>

int main()
{
    char *str;
    str =(char*)malloc(10);
    strcpy(str,"Hello");
    printf("String is %s",str);
    free(str);
    return 0;
}