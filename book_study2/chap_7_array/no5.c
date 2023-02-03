//
//  no5.c
//  book_study2
//
//  Created by 김정인 on 2023/01/08.
//  배열을 역순으로 출력하는 프로그램

#include <stdio.h>
int main(void)
{
    float arr[]={1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("배열 : ");
    
    for(int i=0;i<size;i++)
    {
        printf("%.1f ",arr[i]);
    }
    
    printf("\n역순 : ");
    
    for(int j=size-1;0<=j;j--)                   //역순 프린트 반복문
    {
        printf("%.1f ",arr[j]);
    }
    
    printf("\n");
    
    
    return 0;
}
