/*
         개발자 : 이름
         날 짜  : 26.9.28
         주 제  : 
         
*/

//define _ CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int a = 10, b = 4, c = 0;
    float x = 10, y = 3, z = 0;

    c = a > b && x > y;
    printf("a1) c=%d \n", c);

    c = a < b && x > y;
    printf("a2) c=%d \n", c);

    c = a < b || x > y ;
    printf("a3) c=%d \n", c);



    

    

    printf("a = %d b=%d \wn", ++a, ++b); //증가 후 출력한다.

    printf("a = %d b=%d \wn", a, b);

    printf("a = %d b=%d \wn", a++, b++);

    printf("a = %d b=%d \wn", a, b);

    printf("a = %d b=%d \wn", --a, b--); // a는 1감소후 출력 b는 출력 후 1감소.

    printf("a = %d b=%d \wn", a, b);




    return 0;

    
}