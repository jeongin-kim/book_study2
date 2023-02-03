//
//  function.c
//  book_study2
//
//  Created by 김정인 on 2023/01/13.
//

#include <stdio.h>

int functionName(int _input){
    int output = _input*2;
    printf("I got %d\n",_input);
    return output; //return value
}

//Main function

int main(void){
    
    //Fuction call (Argument = 10)
    int funcOut = functionName(10);
    
    printf("The output of the fuctuon = %d\n", funcOut);
    return 0;
}
