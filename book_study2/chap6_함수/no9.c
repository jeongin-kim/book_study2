//
//  no9.c
//  book_study2
//
//  Created by 김정인 on 2023/01/13.
//  정수를 2진수로 변환하는 함수

#include <stdio.h>

//10진수 -> 2진수 변환 함수
void get_bin(int x){
    //int y = 0;
    int arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for (int i=0; i<size;)
    
    
}



int main(void){
   
    int num = 0;    // 사용자에게 입력받는 수
    
    printf("정수값을 입력하세요 : ");
    scanf("%d",&num);
    printf("2진수 : ");
    get_bin(num);   // 2진수 변환 함수 호출
    
    
    return 0;
}
