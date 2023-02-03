//
//  no1.c
//  book_study2
//
//  Created by 김정인 on 2023/01/31.
//  포인터 사용해 배열 출력하기

#include <stdio.h>

float arr[10] = {0.1, 2.0, 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2};
float *p=arr;

int main(void){
    for (int i=0; i<10; i++){
        printf("%.2f\n ", p[i]);
    }
    
    return 0;
}
