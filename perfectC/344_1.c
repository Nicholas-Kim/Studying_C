#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    for(int i=0;i<5;i++){
        for (int j=5; j>i; j--) {
            printf("%d", j);
        }
        puts("");
    }
}
