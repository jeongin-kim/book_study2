//  어려움
//  no11.c
//  book_study2
//
//  Created by 김정인 on 2023/01/15.
//  소수 구하고 출력하는 프로그램

#include <stdio.h>

void func_prime(int number){
    int i,j=0;
    
    for(i = 2; i <= number; i++){

         for(j = 2; j < i; j++){
         if(i % j == 0)
             break;
         }
        if(i==j)
            printf("%d ",i);
         }
    }


int main(void){
    int num=0;
    printf("1~N 사이의 소수를 구합니다. N의 값은? ");
    scanf("%d",&num);
    func_prime(num);
}
