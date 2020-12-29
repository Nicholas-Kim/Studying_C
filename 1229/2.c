#include <stdio.h>

int main()
{
    /*
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
    printf("%9u %9u %9u\n", &x, &y, &z);
    printf("%9f %9f %9f\n", x, y, z);
    printf("%9f %9f %9f\n", *(pp+2), *(pp+1), *pp);
    
    //for vs code
    //printf("%9f %9f %9f\n", *(pp+4), *(pp+4), *pp);
*/
    
    int m = 100, n = 200, dummy;
    printf("%d %d\n", m, n);
    int *p = &m;
    dummy = m;
    *p = n; //-> m에 주소값을 이용하여 n의 값을 저장
//    printf("%d\n", m);
    p = &n; //-> p가 n의 주소값 참조
    n = dummy;
    printf("%d %d\n", m, n);
    
    
    
    
    return 0;
}
