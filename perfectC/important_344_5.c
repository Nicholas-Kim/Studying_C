#include <stdio.h>

int main()
{
    /*int j = 0;
     for (int i = 1; i <= 100; i++)
     {
     for (j = 2; j < i; j++)
     {
     if (i % j == 0)
     break;
     }
     if (i == j)
     {
     printf("%3d", i);
     printf("\n");
     }
     }*/
    
    
    
    int flag =1;
    for(int i=2;i<=100;i++){
        flag = 1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag = 0;
                break;
            }
        }
        if(flag==1){
            printf("%3d\n", i);
        }
        
    }
    return 0;
}
