#include <stdio.h>

int main(){
    
    int i = 0x324F3A24;
    char * p = (char *)&i;
    for(int i=3;i>=0;i--){
        printf("%x", *(p+i));
    }
    return 0;
    
    
}



