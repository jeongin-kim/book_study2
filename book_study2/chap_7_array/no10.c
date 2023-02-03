//
//  no10.c
//  book_study2
//
//  Created by 김정인 on 2023/01/23.
//  기차 좌석 예매 시뮬레이션

#include <stdio.h>
char arr [10] = {0};
int arr_size = sizeof(arr)/sizeof(arr[0]);
int num;
int remain [10] = {0};
int remain_size = sizeof(remain)/sizeof(remain[0]);


void seat (void);

int main(void){
    
    while(1){
        seat();
        
        printf("예매할 좌석수? ");
        scanf("%d",&num);
        
        for(int i=1;i<=num;i++){
            printf("%d ",i);
        }
        printf("번 좌석을 예매했습니다.\n");
        
        for(int i=0;i<num;i++){
            arr[i] = 'X';
        }
        
        //seat();
    }
    return 0;
}



void seat (void){
    printf("현재 좌석 : [ ");
    for (int i=0;i<arr_size;i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");
}
