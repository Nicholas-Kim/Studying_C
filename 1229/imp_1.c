#include <stdio.h>

int main()
{
    int a = 1, b =3, c = 6;
    
    printf("변수명     저장값     주소값     \n");
    printf("----------------------------\n");
    printf("c       %d      %p\n", c, &c);
    printf("b       %d      %p\n", b, &b);
    printf("a       %d      %p\n", a, &a);
    
    int *p = &a;
    //for xcode
    printf("c       %d      %p\n", *(p-2), p-2);
    printf("b       %d      %p\n", *(p-1), p-1);
    printf("a       %d      %p\n", *(p), p);
    
    //for vs code
//    printf("c       %d      %p\n", *(p-6), p-6);
//    printf("b       %d      %p\n", *(p-3), p-3);
//    printf("a       %d      %p\n", *(p), p);
    
    double x = 2.8, y = 8.4, z = 7.8;
    double *pp = &z;
    //for mac
    printf("%9f %9f %9f\n", *(pp+2), *(pp+1), *pp);
    
    //for vs code
    //printf("%9f %9f %9f\n", *(pp+4), *(pp+4), *pp);

    
    
    return 0;
}
