// #include <iostream>
// using namespace std;

// int main(void)
// {       
//     int n = 0;
//     int nCnt = 0;

//     cout << "3자리 정수 입력: ";
//     cin >> n; // 예: 573

//     nCnt = nCnt + (n / 100);      // 백의 자리
//     nCnt = nCnt + (n / 10) % 10;  // 십의 자리
//     nCnt = nCnt + (n % 10);       // 일의 자리

//     cout << "입력한 자리수 합계: " << nCnt << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(void)
// {
//     int n1,n2,n3,n4,n5;
//     int pSum = 0, nSum = 0;
//     cout <<"정수 5개 입력: ";
//     cin >>n1>>n2>>n3>>n4>>n5;
   
//     if(n1>0)
//        pSum += n1;
//     else
//        nSum += n1;
//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main(void)
// {   
//     int month;
//     cout<<"달을 입력하시오";
//     cin>>month;

//     switch(month) {
//     case 4: case 6: case 9: case 11:
//        cout << "30일" << endl;
//        break;
//     case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//        cout << "31일" << endl;
//        break;

//     }
//  return 0;


// }

#include <iostream>
using namespace std;
int main(void)
// 입력받은 숫자 갯수만큼 3의 배수를 출력하는 프로그램
{
    int cnt;
    int i = 0;
    int n = 0;
    cout<<"갯수 입력:";
    cin >> cnt;
    while (n <cnt)
    {
        i+= 3;
        n = n + 1;
        cout << i << " ";

       
    }
    
    






    return 0;
}