//p389-2
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int data1 = 10, data2 = 20;
    int sum=0;
    int *p;
    p = &data1;
    *p =100;
    sum += *p;
    
    p = &data2;
    *p = 200;
    sum += *p;
    
    printf("sum = %d + %d =  %d\n",data1, data2, sum);
    
    return 0;
    
}


