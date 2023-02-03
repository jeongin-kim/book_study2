//
//  no12_example.c
//  book_study2
//
//  Created by 김정인 on 2023/01/18.
//

#include <stdio.h>
int add(int a, int b)
{
    int    result;
    result = a + b;
    return result;
}
int remove(int a, int b)
{
    int result;
    result = a - b;
    return result;
}
int multiple(int a, int b)
{
    int result;
    result = a*b;
    return result;
}
int division(int a, int b)
{
    int result;
    result = a / b;
    return result;
}
int main()
{
    int n, m;
    char a;
    printf("정수를 입력하시오:");
    scanf("%d", &n);
    printf("정수를 입력하세요:");
    scanf("%d", &m);
    getchar();
    printf("어떤 연산을 원하십니까(+,-,*,/):");
    scanf("%c", &a);
    getchar();
    if (a == '+')
    {
        printf("%d", add(n, m));
    }
    else if (a == '-')
    {
        printf("%d", remove(n, m));
    }
    else if (a == '*')
    {
        printf("%d", multiple(n, m));
    }
    else printf("%d", division(n, m));
    return 0;
}
