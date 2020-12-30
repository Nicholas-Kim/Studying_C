#include <stdio.h>


int main() {

    int a[] = { 4, 7, 9, 3, 6 };
    int b[] = { 4, 7, 9, 3, 6 };
    int lengthA = sizeof(a) / sizeof(int);
    int lengthB = sizeof(b) / sizeof(int);

    int* pa = NULL;
    pa = a;
    int* pb = NULL;
    pb = b;
    int flag = 1;
    
    printf("사용한 배열\n");
    printf("int a[] = {");
    for (int i = 0; i < lengthA; i++) {
        if (i != lengthA - 1) {
            printf("%d, ", a[i]);
        }
        else {
            printf("%d", a[i]);
        }

    }
    printf("}\n");

    printf("int b[] = {");
    for (int i = 0; i < lengthB; i++) {
        if (i != lengthB - 1) {
            printf("%d, ", b[i]);
        }
        else {
            printf("%d", b[i]);
        }

    }
    printf("}\n\n");

    printf("1. 쉽게 생각한 방법\n");
    if (lengthA == lengthB) {
        for (int i = 0; i < lengthA; i++) {
            if (a[i] != b[i]) {
                printf("a[%d]는 %d인 반면 b[%d]는 %d로 두 배열은 다른 배열입니다.\n", i, a[i], i, b[i]);
                if (i == lengthA - 1) {
                    flag = 0;
                    break;
                }

            }
        }
        if (flag == 1) {
            printf("두 배열의 원소값은 서로 같습니다.\n");
        }
    }
    else {
        printf("두 배열은 길이가 달라 다른 배열입니다.\n");
    }

    printf("--------------------------------------------------\n");
    printf("2. 포인터를 이용한 방법 1 (포인터를 배열처럼 첨자를 이용하는 방법)\n");

    if (lengthA == lengthB) {
        for (int i = 0; i < lengthA; i++) {
            if (pa[i] != pb[i]) {
                printf("a[%d]는 %d인 반면 b[%d]는 %d로 두 배열은 다른 배열입니다.\n", i, a[i], i, b[i]);
                if (i == lengthA - 1) {
                    flag = 0;
                    break;
                }

            }
        }
        if (flag == 1) {
            printf("두 배열의 원소값은 서로 같습니다.\n");
        }
    }
    else {
        printf("두 배열은 길이가 달라 다른 배열입니다.\n");
    }

    printf("--------------------------------------------------\n");
    printf("3. 포인터를 이용한 방법 2 (포인터를 *를 이용하여 간접참조하는 방법)\n");

    if (lengthA == lengthB) {
        for (int i = 0; i < lengthA; i++) {
            if (*(pa + i) != *(pb + i)) {
                printf("a[%d]는 %d인 반면 b[%d]는 %d로 두 배열은 다른 배열입니다.\n", i, a[i], i, b[i]);
                if (i == lengthA - 1) {
                    flag = 0;
                    break;
                }

            }
        }
        if (flag == 1) {
            printf("두 배열의 원소값은 서로 같습니다.\n");
        }
    }
    else {
        printf("두 배열은 길이가 달라 다른 배열입니다.\n");
    }

    return 0;


}
