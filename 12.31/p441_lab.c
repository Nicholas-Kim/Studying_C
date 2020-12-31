#include <stdio.h>
#define ROW 2
#define COL 3

int main(){
    
    
    int abc[4][3]={};
    int (*ptr)[3] = abc;
    
//    for(int i=0, cnt=1;i<4;i++){
//        for(int j=0;j<3;j++, cnt++){
//            abc[i][j] = cnt*10;
//        }
//    }
    for(int i=0;i<sizeof(abc)/sizeof(int);i++){
        *(*ptr+i)=(i+1)*10;
    }
    
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("%d ", abc[i][j]);
        }
        puts("");
    }
    
    for(int i=0;i<4;i++){
        printf("%p", abc[i]);
        puts("");
    }
    for(int i=0;i<3;i++){
        printf("%d\n", *(abc[2]+i));
    }
    
    
    
    return 0;
}
