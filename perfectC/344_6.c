
#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS



int main() {
    
    for(int i=0;i<8;i++){
        for(int j=8;j>=0;j--){
            if(j>i){
                printf(" ");
            }
            else{
                printf("%d", j);
            }
        }
        for(int k=0;k<i;k++){
            printf("%d", k+1);
        }
        puts("");
        
    }
    

    return 0;

}
