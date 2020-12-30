#include <stdio.h>


int main(){
    
    int a[] = {4, 7, 9, 3, 6};
    int b[] = {10, 20, 30, 40, 50, 60};
    int *pa = NULL;
    pa = a;
    int *pb = NULL;
    pb = b;
    int lengthA = sizeof(a)/sizeof(int);
    int lengthB = sizeof(b)/sizeof(int);
    
    printf("1. 쉽게 생각한 방법\n");
        for(int i=0;i<lengthA;i++){
            b[i]=a[i];
        }
        printf("int b[] = {");
        for(int i=0;i<lengthB;i++){
            if(i!=lengthB-1){
                printf("%d, ",b[i]);
            }else{
                printf("%d", b[i]);
            }
    
        }
        printf("}\n\n");
    
    printf("--------------------------------------------------\n");
    printf("2. 포인터를 이용한 방법 1 (포인터를 배열처럼 첨자를 이용하는 방법)\n");
    for(int i=0;i<lengthA;i++){
        pb[i]=pa[i];
    }
    printf("int b[] = {");
    for(int i=0;i<lengthB;i++){
        if(i!=lengthB-1){
            printf("%d, ",b[i]);
        }else{
            printf("%d", b[i]);
        }

    }
    printf("}\n\n");
    
    printf("--------------------------------------------------\n");
    printf("3. 포인터를 이용한 방법 2 (포인터를 *를 이용하여 간접참조하는 방법)\n");
    
    for(int i=0;i<lengthA;i++){
        *(pb+i) = *(pa+i);
    }
    
    printf("int b[] = {");
    for(int i=0;i<lengthB;i++){
        if(i!=lengthB-1){
            printf("%d, ",*(pb+i));
        }else{
            printf("%d", *(pb+i));
        }
        
    }
    printf("}\n\n");
    
    
    
    
    return 0;
    
    
}
