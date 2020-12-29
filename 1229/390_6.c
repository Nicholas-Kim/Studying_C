#include <stdio.h>

int main(){
    
    int i = 0x3C405B7B;
//    < @ [ {
    char * p = (char*)&i;
    p+=1;
    printf("[ %c\n", *(p--));
    printf("{ %c\n", *(p++));
    printf("@ %c\n", *(++p));
    printf("< %c\n", *(++p));
    
    return 0;
    
    
}



