#include <stdio.h>
int main(){
    int c[20][20] = { 0, 1 }, a, i, j;
    scanf("%d", &a);
    for (i = 1; i <= a; i++){
        for (j = 1; j <= i; j++){
            c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
            printf("%d   ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int qq(int a, int b){
    if (a == 0 || b == 0 || a == b)
        return 1;
    else
        return qq(a - 1, b) + qq(a - 1, b - 1);
}
 
int main(){
    int a, i, j;
    scanf("%d", &a);
 
    for (i = 0; i < a; i++){
        for (j = 0; j <= i; j++){
            printf("%d   ", qq(i, j));
        }
        printf("\n");
    }
    return 0;
}
