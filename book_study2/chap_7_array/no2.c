//
//  no2.c
//  book_study2
//
//  Created by 김정인 on 2023/01/08.
//  등비수열 구하기

#include <stdio.h>
int main(void)
{
    int first,second,result=0;
    double arr[10];
    int size = sizeof(arr)/sizeof (arr[0]);
    
    printf("첫 번째 항?");
    scanf("%d",&first);
    printf("공비?");
    scanf("%d",&second);
    printf("등비수열 : ");
    
    result = first;
    
    for(int i=0; i<size; i++)
    {
        arr[i]=result;
        result = result*second;
        printf("%.0f ,",arr[i]);
        
    }
    return 0;
    
}
