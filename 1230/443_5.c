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
    //1. 쉽게 생각한 방법
    //    for(int i=0;i<lengthA;i++){
    //        b[i]=a[i];
    //    }
    //    printf("int b[] = {");
    //    for(int i=0;i<lengthB;i++){
    //        if(i!=lengthB-1){
    //            printf("%d, ",b[i]);
    //        }else{
    //            printf("%d", b[i]);
    //        }
    //
    //    }
    //    printf("}\n");
    
    
    //포인터 방법1) 포인터로 배열과 같이 첨자를 이용하여 배열의 원소를 참조할 수 있다.
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
    printf("}\n");
    
    //포인터 방법2) 간접참조 이용
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
    printf("}\n");
    return 0;
    
    
}
