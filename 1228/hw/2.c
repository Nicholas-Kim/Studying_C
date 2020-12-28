
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    char *pc = (char *)100;
    int *pi = (int *)100;
    double *pd = (double *)100;
    pd = 100;
    
    printf("%u %u %u\n", (int)(pc-1), (int)pc, (int)(pc+1));
    printf("%u %u %u\n", (int)(pi-1), (int)pi, (int)(pi+1));
    printf("%u %u %u\n", (int)(pd-1), (int)pd, (int)(pd+1));
    
    return 0;
}


