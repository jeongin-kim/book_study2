//
//  no7.c
//  book_study2
//
//  Created by 김정인 on 2023/01/23.
//  배열의 합을 구해서 출력하는 함수

#include <stdio.h>
float arr [5] ={0};
int size= sizeof(arr)/sizeof(arr[0]);


void func_plus(float arr[]){
    float result = 0;
    
    for (int i =0; i<size; i++) {
        result = result + arr[i];
    }
    printf("%f ",result);
}

int main(void){
    
    printf("실수 5개를 입력하세요 : ");
    for (int i=0; i<size; i++) {
        scanf("%f",&arr[i]);
    }
    func_plus(arr);
}
