//
//  no4.c
//  book_study2
//
//  Created by 김정인 on 2023/01/08.
//  인덱스에서 역순으로 원소 찾기
//  목록에 없을 경우 에러메세지 띄우기

#include <stdio.h>

int main(void)
{
    int arr[] = {23, 45, 62, 12, 99, 83, 23, 50, 12, 37};
    // 초기 배열
    int size = sizeof(arr)/sizeof(arr[0]);
    // 배열의 사이즈
    int num= 0;
    // 사용자한테 입력받은 값
    int no = 0;
    // n번째 원소를 표시하는 변수
    
    while (1)
    {
        printf("배열 : ");
        for (int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        // 전체 배열 프린트문
        
        printf("찾을 값? ");
        scanf("%d",&num);
        //scanf로 값 입력받기
        
        
            for (int j=0; j<size; j++)
            {
                if(num==arr[j])
                {
                    no = j+1;
                    printf("%d는 %d번째 원소입니다. \n",num,no);
                
                }
                else
                {
                    printf("배열 안의 값을 입력해주세요.\n\n");
                    break;
                }
            }
            //자릿값 출력하는 for문
    }
    
    return 0;
    
}
