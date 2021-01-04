#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

int findMax(int* ary, int SIZE);
void findmaxIndex(int *ary, int SIZE);
int findMin(int ary[][5], int row, int col);
void findMinIndex(int ary[][5], int row, int col);



int main(void) {
    int ary[20] = {0};
    int ary2[4][5] ={0,};
    srand((long)time(NULL)); // 난수에 시드를 지정하기 위해 srand를 이용한다. 
    
    
    //1) 50 ~ 99 사이의 값을 20개 만들기 --> 1차원 배열에 값 넣기
    for(int i=0;i<20;i++){
        ary[i] = rand()%50+50;
    }
    for(int i=0;i<20;i++){
        printf("%d ", ary[i]);
    }
    puts("");
    
    printf("1차원 배열에서의 최솟값: %d\n", findMax(ary, 20));
    findmaxIndex(ary, 20);
    puts("");
    
    
    
    
    //2)  50 ~ 99 사이의 값을 20개 만드는데 --> 2차원 [4][5] 배열에 넣기
    for(int i=0;i<20;i++){
        *(*ary2 + i)=rand()%50+50;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("%d ", ary2[i][j]);
        }
        puts("");
    }
    
    printf("2차원 배열에서의 최솟값: %d\n", findMin(ary2, 4, 5));
    
    findMinIndex(ary2, 4,5);
    
    
    return 0;
    
}

//함수1에서는 1차원 배열을 인자로 받아서, 가장 큰 값을 찾아서 돌려주기
int findMax(int* ary, int SIZE){
    int max=ary[0];
    for(int i=0;i<SIZE;i++){
        if(max<ary[i]){
            max = ary[i];
        }
    }
    return max;
}

//1번 문제의 1차원 배열에서 함수3은 가장 큰 값의 위치를 찾아 주기.
void findmaxIndex(int *ary, int SIZE){
    int max = findMax(ary, SIZE);
    printf("1차원 배열에서 가장 큰 값(%d)의 위치는 ", max);
    int cnt =0;
    for(int i=0;i<SIZE;i++){
        if(max==ary[i]){
            cnt++;
        }
    }
    for(int i=0,tmp=0;i<SIZE;i++){
        if(max==ary[i]){
            tmp++;
            if(tmp!=cnt){
                printf("%d, ", i);
            }else{
                printf("%d", i);
            }
            
        }
    }
    printf("입니다.\n");
    
}

//함수2에서는 그 배열을 2차원 배열로 받아서  ([4][5] 짜리 배열) 전체 중 가장 작은 값을 찾아서 돌려주기.
int findMin(int ary[][5], int row, int col){
    int min = 99;
    for(int i=0;i<row*col;i++){
        if(min>*(*ary+i)){
            min = *(*ary+i);
        }
    }
    return min;
}


//4) 2번 문제의 2차원 배열에서 함수4는 가장 작은 값의 위치 (i,j)찾아주기
void findMinIndex(int ary[][5], int row, int col){
    int min = findMin(ary, row, col);
    printf("2차원 배열에서 가장 작은 값(%d)의 위치는 ", min);
    int cnt=0;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(min == ary[i][j]){
                cnt++;
            }
        }
        
    }
    
    for(int i=0, tmp=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(min == ary[i][j]){
                tmp++;
                if(tmp!=cnt){
                    printf("(%d, %d), ",i, j);
                }else{
                    printf("(%d, %d)",i, j);
                }
                
            }
        }
        
    }
    
    printf("입니다.\n");
}
