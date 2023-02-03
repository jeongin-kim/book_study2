//
//  no10.c
//  book_study2
//
//  Created by 김정인 on 2023/01/15.
//  약수와 약수의 개수 출력하는 프로그램

#include <stdio.h>

//약수의 개수를 계산하는 함수

void func_number(int num){
    int count = 0;
    for (int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
            count = count+1;
        }
        else continue;
    }
    printf("=> %d개\n",count);
}

int main(void){
    
    int number; //사용자에게 입력받는 수
    
    printf("양의 정수? ");
    scanf("%d",&number);
    printf("%d의 약수 : ",number);
    func_number(number);    // 함수호출
  
    
    
    
}
