//
//  no3.c
//  book_study2
//
//  Created by 김정인 on 2023/01/08.
//  배열의 최소값과 최대값 구하기

#include <stdio.h>

int main(void)
{
    int arr [10]={23,45,62,12,99,83,23,50,72,37};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max=0;
    int min = 100;
    
    printf("배열 : ");
    for (int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    
    printf("최대값: ");
    for(int j=0; j<size;j++)
    {
        if(max<arr[j])
        {
            max = arr[j];
        }
    }
    printf("%d \n", max);
    
    
    printf("최소값: ");
    for(int j=0; j<size;j++)
    {
        if(min>arr[j])
        {
            min = arr[j];
        }
    }
    printf("%d \n", min);
    
    
    return 0;
}
