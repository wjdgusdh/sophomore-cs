/*
         개발자 : 이름
         날 짜  : 26.9.21
         주 제  : 
         
*/

//define _ CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int num1 = 0, num2 = 0, reno = 0;
    char op = ' ';

    printf("사칙연산을 위한 프로그램 \n 정수 문자 정수를 입력?");

    scanf_s("%d", &num1);
    scanf_s(" %c", &op);
    scanf_s("%d", &num2);

    printf("%d %c %d =", num1,op, num2);

    if (op =='+'){
        reno = num1 + num2;
    }
    else if (op =='-'){
        reno = num1 - num2;
    }
    else if (op =='*'){
        reno = num1 * num2;
    }
    else if (op =='/'){
        reno = num1 / num2;
    }
    else if (op =='%'){
        reno = num1 % num2;
    }

    else {
        reno = 0;
    }

    printf("\n\n %d %c %d = %d", num1, op, num2, reno);


    return 0;
}