//
//  no6.c
//  book_study2
//
//  Created by 김정인 on 2023/01/11.
//  정수형 배열의 모든 원소를 특정값으로 채우는 함수

#include <stdio.h>

void arr_repeat(int num)
{
    int arr [20];
    int size= sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<size;i++){
        arr[i] = num ;
        printf("%d ",arr[i]);
    }
}

int main(void)
{
    int num=0;
    printf("배열의 원소에 저장할 값 : ");
    scanf("%d",&num);
    arr_repeat(num);
    
    
    return 0;
    
    
}
