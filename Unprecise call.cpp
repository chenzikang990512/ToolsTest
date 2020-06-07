#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

//base 16 to base 10

int convert(char *n){
    int result = 0;
    for (int i = strlen(n) - 1; i >= 0; i--){
        if (n[i] >= 'a')
            result += (n[i] - 'a' + 10)* pow(16, strlen(n) - i - 1);
        else
        if (n[i] >= 'A')
            result += (n[i] - 'A' + 10)* pow(16, strlen(n) - i - 1);
        else
        if (n[i] >= '0')
            result += (n[i] - '0')* pow(16, strlen(n) - i - 1);
    }
    return result;
}

void main(void){
    char n[10];
    printf("Introduceti numarul: "); scanf("%s", n);
    printf("Numarul in baza 10 este: %d", convert(n));
    _getch();
}