//
//  no12.c
//  book_study2
//
//  Created by 김정인 on 2023/01/29.
//  성적 구하기

#include <stdio.h>
int arr_score[5][4]={   //초기 성적값 2차원 배열
    {28,28,26,9},
    {30,27,30,10},
    {25,26,24,8},
    {18,22,22,5},
    {24,25,30,10}
};
int row = sizeof(arr_score[0])/sizeof(int);   //가로 길이
int col = sizeof(arr_score)/sizeof(arr_score[0]);   //세로 길이


int main(void){
    printf("        중간 기말 팀플 출석 총점\n");
    printf("--------------------------\n");

    
// 총점 구하기
    int arr_sum[5] = {0};
    
    for (int i = 0; i < col; i++){
        int sum = 0;
        for( int j =0; j < row; j++){
            sum = sum + arr_score[i][j];
        }
        arr_sum[i] = sum;}
    

// 평균 구하기
    float arr_avg[5] = {0};

    for (int i = 0; i < row; i++){
        float avg = 0;
        for ( int j=0; j < col; j++){
            avg = avg + arr_score[i][j];
        }
        avg = avg/col;
        arr_avg[i] = avg;
    }
    
    
    for (int i=0; i < col; i++){    //배열 전체 출력 반복문
        printf("학생 %d번:  ",i+1);
        for(int j=0; j<row; j++){
            printf("%d  ",arr_score[i][j]);}
        printf("%d \n",arr_sum[i]);

    }
    printf("--------------------------\n");
    printf("항목별 평균: ");
    for (int i=0; i < row; i++){
        printf("%.2f ",arr_avg[i]);
    }
    
    
    return 0;
}
