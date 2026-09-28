/*
         개발자 : 정현오
         날 짜  : 26.9.28
         주 제  : if switch
         
*/

//define _ CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
    double x = 5, y = 10, result;  
    char op = '+';
    switch (op)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n" , x, y, x + y);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n" , x, y, x - y);
        break;
    
    default:
        printf("연산자를 잘못 선택했습니다.\n");
    }



    if (op == '+'){
        printf("%.2f + %.2f = %.2f\n", x, y, x + y); 
    }
    else if  (op == '-'){
        printf("%.2f - %.2f = %.2f \n", x, y, x - y );
    }
    else {
        printf("연산자를 잘못 선택했습니다.\n");
    }

// 삼항연산자 변환

(op == '+') ? printf("%.2f + %.2f = %.2f/n" , x, y, x + y) :    (op == '-') ? printf("%.2f - %.2f = %.2f\n", x, y, x - y):    printf("연산자를 잘못 입력했습니다.\n");

return 0;
}
