//  no12.c
//  book_study2
//
//  Created by 김정인 on 2023/01/17.
//  누산기 만들기

#include <stdio.h>
int first;


void cal(char s,int num){
    
        if (s == '+'){
            first = first + num;
        }
        else if(s == '-'){
            first = first - num;
        }
    
        else if(s == '/'){
            first = first/num;
        }
        else if(s == '*'){
            first = first*num;
        }
    
    printf("= %d",first);
    }

int main (void){
    char sign;
    int number;
    
   printf("0");
    
    while(1)
    {
        scanf("%c %d", &sign, &number);
        
        if(sign == 0 && number == 0)
        {break;}
        
        else {
            cal(sign, number);
        }
    }
    
    return 0;
}
