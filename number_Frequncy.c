#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void) {
    int num[10] = {0, }; //정수가 불려진 횟수를 저장할 배열 
    int tmp; //입력받은 정수를 저장할 임시 변수
    int maxIndex = 0; //가장 많이 입력된 정수
    int max = 0; //가장 많이 입력은 횟수의 최댓값

    for (int i = 0; i < 20; i++) {
        printf("%d번째 정수를 입력: ", i+1);
        scanf("%d", &tmp);
        num[tmp]++; //tmp가 입력되었다는 뜻임으로 입력된 횟수를 뜻하는 num배열의 인덱스가 tmp인 원소를 1 증가
    }
    
    for (int i = 0; i < sizeof(num)/sizeof(num[0]); i++) {
        if (max < num[i]) { //가장 많이 입력된 정수를 찾는 과정
            maxIndex = i;                              
            max = num[maxIndex];
        }
    }

    printf("가장 많이 입력받은 정수: ");
    for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
        if (num[maxIndex] == num[i]) { //가장 많이 입력받은 정수가 한개가 아닌 경우를 해결하기 위함.     
            printf("%d ", i);
        }
    }
    
    puts("");

    printf("가장 많이 입력받은 정수의 횟수: %d\n", num[maxIndex]);    

    return 0;
}
