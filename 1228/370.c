
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int data = 100;
    char ch ='A';
    int *ptrint = &data;
    char *ptrchar = &ch;
    printf("간접참조 출력: %d %c\n", *ptrint, *ptrchar);
    
    *ptrint = 200;
    *ptrchar = 'B';
    printf("직접 참조 출력: %d %c\n", data, ch);
    
    return 0;
}


