#include <stdio.h>


int main(){
    
    int a[] = {4, 7, 9, 3, 6};
    int b[] = {4, 6, 2,5,6, 3, 5};
    int *pa = a;
    int *pb = b;
    
    int lengthA = sizeof(a)/sizeof(int);
    int lengthB = sizeof(b)/sizeof(int);
    int flag = 1;
    //    일반적으로 생각한 쉬운 방법
    //    if(lengthA == lengthB){
    //        for(int i=0;i<lengthA;i++){
    //            if(a[i]!=b[i]){
    //                printf("a[%d]는 %d인 반면 b[%d]는 %d로 두 배열은 다른 배열입니다.\n", i, a[i], i, b[i]);
    //                if(i==lengthA-1){
    //                    flag = 0;
    //                    break;
    //                }
    //
    //            }
    //        }
    //        if(flag==1){
    //            printf("두 배열의 원소값은 서로 같습니다.\n");
    //        }
    //    }else{
    //        printf("두 배열은 길이가 달라 다른 배열입니다.\n");
    //    }
    
//    포인터 방법1) 포인터로 배열과 같이 첨자를 이용하여 배열의 원소를 참조하는 방법.
//    if(lengthA == lengthB){
//        for(int i=0;i<lengthA;i++){
//            if(pa[i]!=pb[i]){
//                printf("a[%d]는 %d인 반면 b[%d]는 %d로 두 배열은 다른 배열입니다.\n", i, a[i], i, b[i]);
//                if(i==lengthA-1){
//                    flag = 0;
//                    break;
//                }
//
//            }
//        }
//        if(flag==1){
//            printf("두 배열의 원소값은 서로 같습니다.\n");
//        }
//    }else{
//        printf("두 배열은 길이가 달라 다른 배열입니다.\n");
//    }
    
//    포인터 방법2) 간접참조 이용
    if(lengthA == lengthB){
        for(int i=0;i<lengthA;i++){
            if(*(pa+i)!=*(pb+i)){
                printf("a[%d]는 %d인 반면 b[%d]는 %d로 두 배열은 다른 배열입니다.\n", i, a[i], i, b[i]);
                if(i==lengthA-1){
                    flag = 0;
                    break;
                }
                
            }
        }
        if(flag==1){
            printf("두 배열의 원소값은 서로 같습니다.\n");
        }
    }else{
        printf("두 배열은 길이가 달라 다른 배열입니다.\n");
    }
    
    return 0;
    
    
}
