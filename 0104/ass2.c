//
//  2.c
//  c_practice
//
//  Created by Nicholas Kim on 2021/01/04.
//

#include <stdio.h>

void copyarray(int from[], int to[], int n);

int main(void){
    int a[5] = {1,2,3,4,5};
    int b[10] = {2,4,6,8,10,12,14,16, 18, 20};
    int aLength = sizeof(a)/sizeof(int);
    int bLength = sizeof(b)/sizeof(int);
    
    printf("첫번째 배열: ");
    for(int i=0;i<aLength;i++){
        printf("%d ", a[i]);
    }
    puts("");
    printf("두번째 배열: ");
    for(int i=0;i<bLength;i++){
        printf("%d ", b[i]);
    }
    puts("");
    
    copyarray(a, b, 4);
    
    printf("copyarray 실행후\n");
    
    printf("첫번째 배열: ");
    for(int i=0;i<aLength;i++){
        printf("%d ", a[i]);
    }
    puts("");
    printf("두번째 배열: ");
    for(int i=0;i<bLength;i++){
        printf("%d ", b[i]);
    }
    puts("");
    
    return 0;
}


void copyarray(int from[], int to[], int n){
    int *fromP = from;
    int *toP = to;
    
    for(int i=0;i<n;i++){
       toP[i] =fromP[i];
    }
}
