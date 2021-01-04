
#include <stdio.h>

int isequalarray(int a[], int b[], int n);

int main(void){
    int a[5] = {1,2,3,4,5};
    int b[5] = {1,2,3,9,5};
    int c[5] = {1,2,3,5,7};
    
    printf("%d\n", isequalarray(a, b, 5));
    
    printf("%d\n", isequalarray(b, c, 5));
    return 0;
}


int isequalarray(int a[], int b[], int n){
    int *aP = a;
    int *bP = b;
    
    
    for(int i=0;i<n;i++){
        if(*(aP+i)!=*(bP+i)){
            return 0;
        }
    }
    
    return 1;
}
