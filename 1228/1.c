
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    // insert code here...


   /*
    int input;
    printf("정수 입력: ");
    scanf("%d", &input);
    printf("입력값: %d\n", input);
    printf("주소값: %u(10진수), %p(16진수)\n", (unsigned)&input, &input);
    printf("주소값: %d(10진수), %#X(16진수)\n", (int)&input, (int)&input);
    printf("input의 크기: %d\n", sizeof(input));
    printf("주소값의 크기: %d\n", sizeof(&input));

    */
    //000000B21E2FF7B4


    char alpha;

    printf("문자 입력: ");
    scanf("%c", &alpha);
    printf("입력값: %c\n", alpha);
    printf("주소값: %u(10진수), %p(16진수)\n", (unsigned)&alpha, &alpha);
    printf("주소값: %d(10진수), %#X(16진수)\n", (int)&alpha, (int)&alpha);
    printf("alpha의 크기: %d\n", sizeof(alpha));
    printf("주소값의 크기: %d\n", sizeof(&alpha));
    puts("");


    float weight;
    printf("무게 입력: ");
    scanf("%f", &weight);
    printf("입력값: %f\n", weight);
    printf("주소값: %u(10진수), %p(16진수)\n", (unsigned)&weight, &weight);
    printf("주소값: %d(10진수), %#X(16진수)\n", (int)&weight, (int)&weight);
    printf("weight의 크기: %d\n", sizeof(weight));
    printf("주소값의 크기: %d\n", sizeof(&weight));
    puts("");

    double temperature;
    printf("온도 입력: ");
    scanf("%lf", &temperature);
    printf("입력값: %lf\n", temperature);
    printf("주소값: %u(10진수), %p(16진수)\n", (unsigned)&temperature, &temperature);
    printf("주소값: %d(10진수), %#X(16진수)\n", (int)&temperature, (int)&temperature);
    printf("temperature의 크기: %d\n", sizeof(temperature));
    printf("주소값의 크기: %d\n", sizeof(&temperature));




    return 0;
}


