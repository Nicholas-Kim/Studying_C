#include <stdio.h>

int main(){
    
    int value = 0x2F24263F;
    char * pc = (char *) &value;
    for(int i=0;i<4; i++){
        printf("%c\n\n", *(pc+i));
    }
}



