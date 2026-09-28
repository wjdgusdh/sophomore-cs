/*
         개발자 : 정현오
         날 짜  : 26.9.28
         주 제  : 정수를 입려받아 짝수 , 홀수를 따져라
         1) if 2) switch 3) 항연산자 
         
*/

//define _ CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(){
    int no = 0;

    while(true){
    printf("정수?");
    scanf_s("%d", &no);
    if (no == 0 )
        break;

    if (no % 2 == 0 ){
        printf("짝");
    }
    else{
        printf("홀");
    }


    switch (no % 2)
    {
    case 0:
        printf("짝");
        break;

    default:
    printf("홀");
        
    }
    }
    return 0;

}