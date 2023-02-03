//
//  no2.c
//  book_study2
//
//  Created by 김정인 on 2023/01/31.
//  doble형 배열의 주소 출력하기

#include <stdio.h>
double arr [3] = {0.5, 0.6, 0.7};
double *p1=arr;


int main(void){
    for (int i=0; i<3; i++){
        printf("x[%d]의 주소 : %f\n",i,p1[i]);
    }
    return 0;
}

