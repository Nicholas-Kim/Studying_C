//p389-1
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    char cdata = '*';
    char *p = &cdata;
    printf("변수의 주소: %x, 코드값: %d, 문자: %c", p, *p, *p);
    
    return 0;
}


