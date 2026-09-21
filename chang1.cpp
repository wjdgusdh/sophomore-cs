/*
         개발자 : 이름
         날 짜  : 26.9.21
         주 제  : 
         
*/

//define _ CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{   
    float   month = 0;
    month = 5.2;
    printf("1년은 몇 달?");
    scanf_s("%f", &month);
    printf("1년|t은 %f달 \n\n", month);


    int day = 0;
    printf("1달은 몇 일?");
    scanf_s("%d", &day);
    // 1년은 ?달 8칸띄우기 1달은 ?일입니다.
    printf("1년은 %f 달 \t 1달은 %d 일입니다.\n\n\n" , month,day);


    char abc = ' ';
    printf("문자를 입력하시오");
    scanf(" %c",&abc);
    printf("문자 %c는 아스키코드 숫자 %d입니다", abc, abc);

    return 0;
}