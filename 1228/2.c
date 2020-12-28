
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int data = 100;
    int *ptrint;
    ptrint = &data;
    
    char alpha = 'K';
    char *ptrchar;
    ptrchar = &alpha;
    
    
    double temp = -2.3;
    double *ptrdouble;
    ptrdouble = &temp;
    
    
    float weight = 32.2;
    float *ptrfloat;
    ptrfloat = &weight;
    
    
    
    printf("변수명      주소값              저장값\n");
    printf("----------------------------------------\n");
    printf("  data    %p  %8d\n", &data, data);
    printf("ptrint   %p %p\n", &ptrint, ptrint);
    puts("");
    
    
    printf("변수명      주소값              저장값\n");
    printf("----------------------------------------\n");
    printf("  alpha    %p  %8d\n", &alpha, alpha);
    printf("ptrint   %p %p\n", &ptrchar, ptrchar);
    puts("");
    
    
    
    printf("변수명      주소값              저장값\n");
    printf("----------------------------------------\n");
    printf("  temp    %p  %8lf\n", &temp, temp);
    printf("ptrdouble   %p %p\n", &ptrdouble, ptrdouble);
    puts("");
    
    
    
    printf("변수명      주소값              저장값\n");
    printf("----------------------------------------\n");
    printf("  weight    %p  %8f\n", &weight, weight);
    printf("ptrfloat   %p %p\n", &ptrfloat, ptrfloat);
    puts("");
    
    
  


    return 0;
}


