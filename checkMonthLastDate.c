#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void) {

    int monthArray[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int year;
    int month;
    printf("년을 입력해주세요:");
    scanf("%d", &year);
    puts("");

    printf("월을 입력해주세요:");
    scanf("%d", &month);
    if (month > 12 || month < 1) {
        printf("잘못된 월을 입력하였습니다.");
        return 0;
    }
    puts("");

    if (month != 2) {
        printf("%d년도 %d월달은 %d일이 말일입니다.", year, month, monthArray[month - 1]);
    }

    else {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            monthArray[1] += 1;
        }
        printf("%d년도 %d월달은 %d일이 말일입니다.", year, month, monthArray[month - 1]);
    }
    puts("");
    return 0;
}
