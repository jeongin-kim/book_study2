//
//  main.c
//  book_study2
//
//  Created by 김정인 on 2023/01/07.
//  등차수열 구하기

#include <stdio.h>

int main (void)
{
    int first,second,result = 0;
    int arr[10];
    int size = sizeof(arr)/sizeof (arr[0]);
    
    printf("첫 번째 항? ");
    scanf("%d",&first);
    printf("공차? ");
    scanf("%d",&second);
    printf("등차수열 : ");
    
    result=first;
    
    for (int i=0;i<size;i++)
    {
        arr[i]=result;
        result=result+second;
        printf("%d ",arr[i]);
        
    }
    printf("\n");
    
    return 0;
}
