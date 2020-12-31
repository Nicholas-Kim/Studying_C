#include <stdio.h>
#define ROW 2
#define COL 3

void swap(int *ptr1, int *ptr2){
    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("%d %d", *ptr1, *ptr2);
}

int main(){
    
    int a = 3;
    int b = 4;
    swap(&a, &b);
    
    printf("%d %d", a,b);

    
    
    return 0;
}
