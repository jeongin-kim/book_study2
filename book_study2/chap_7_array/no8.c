//
//  no8.c
//  book_study2
//
//  Created by 김정인 on 2023/01/23.
//  할인율 입력받아 할인된 가격 출력하기

#include <stdio.h>
int dis = 0;
int arr [5] ={0};
int size = sizeof(arr)/sizeof(arr[0]);
int result = 0;

void func_discount(int arr[]);

int main(void){
    
    printf("상품가 5개를 입력하세요 : ");
    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("할인율(%%)?");
    scanf("%d",&dis);
    func_discount(arr);
}

void func_discount(int arr[]){
    for(int i=0; i<size; i++){
        result = arr[i]*(100-dis)/100;
        printf("가격 : %d --> 할인가: %d\n",arr[i],result);
    }
}
