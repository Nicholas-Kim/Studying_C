
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int data = 100;
    int *ptr;
    ptr = &data;
    
    double ddata = 100.0;
    double *dptr;
    dptr = &ddata;
    
    char cdata = 'a';
    char *cptr;
    cptr = &cptr;
    
    float fdata = 23.3;
    float *fptr;
    fptr = &fdata;
    
    printf("int형\n");
    printf("%p\n", ptr);
    ptr++;
    printf("%p\n\n", ptr);
    
    printf("char형\n");
    printf("%p\n", cptr);
    cptr++;
    printf("%p\n\n", cptr);
    
    printf("float형\n");
    printf("%p\n", fptr);
    fptr++;
    printf("%p\n\n", fptr);
    
    
    printf("double형\n");
    printf("%p\n", dptr);
    dptr++;
    printf("%p\n\n", dptr);
    
    
    
    
    
    return 0;
}


