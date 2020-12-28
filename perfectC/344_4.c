
#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS



int main() {
    for(int i=1, k=0;i<=100;i++){
        if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0){
            printf("%d ", i);
            k++;
        }
        if(k==10){
            puts("");
            k=0;
        }
    }

    return 0;
    
}
