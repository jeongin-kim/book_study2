//
//  no8.c
//  book_study2
//
//  Created by 김정인 on 2023/01/11.
//  유효한 날짜 구하기

#include <stdio.h>

int get_right(int y,int m,int d)
{
    //result 자료형 선언
    int result = 0;
    
    // 입력받은 숫자가 유효한지 선별
    if((0<m)&&(m<13)&&(d<32)&&(0<d))
    {result=1;}
    else
    {result = 0;}
    
    return result;
}


int main(void)
{
    //변수 자료형 선언
    int y,m,d = 0;
    //질문 반복하는 while문 작성
    while(1){
        
        //변수 y,m,d 질문하고 입력받기
        printf("날짜 (연 월 일)? ");
        scanf("%d %d %d",&y,&m,&d);
        
        //함수 호출 후 변수 final에 값 저장
        int final = get_right(y,m,d);
        
        //함수값에 따라 알맞은 결과 출력
        if (final==1)
        {
            printf("입력한 날짜는 %d년 %d월 %d일 입니다.\n\n",y,m,d);
        }
        
        else if(final==0)
        {  printf("잘못 입력하셨습니다.유효한 날짜를 입력하세요.\n\n");
            
        }
    }
    return 0;
}
