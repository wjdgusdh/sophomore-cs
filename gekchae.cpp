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


// 실습 8입력 받은 숫자 개수만큼 3의 배수를 출력하는 프로그램.
// #include <iostream>
// using namespace std;
// int main(void)
// // 입력받은 숫자 갯수만큼 3의 배수를 출력하는 프로그램
// {
//     int cnt;
//     int i = 0;
//     int n = 0;
//     cout<<"갯수 입력:";
//     cin >> cnt;
//     while (n <cnt)
//     {
//         i+= 3;
//         n = n + 1;
//         cout << i << " ";

       
//     }
    
    






//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(void)
// {
//     int n;
//     int rev;
//     cout<<"정수 입력";
//     cin >> n;
//     do{
//         rev = n%10;
//         cout << rev << " ";
//         n = n / 10;
//      }  while (n != 0);
//     cout << endl;

    
 
        
//         return 0;

// }

// #include <iostream>
// using namespace std;
// int main(void){
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << "*";

//         }
//         cout <<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(void){
//     int num[10];
//         for(int i = 0 ; i<10 ; i ++)
//         num[i] = i ;

//         for (int i = 0; i < 10; i++) 
//         cout << num[i] << " ";
        

// return 0;




// }


// #include <iostream>
// using namespace std;
// int main(void){

//     int s[12];
//     for(int i = 0; i < 12; i++)
//         s[i] = rand() % 20;

//     for(int i = 0; i < 12; i++)
//         cout << s[i] << "  ";
//     cout << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int sum(int a, int b, int c = 0, int d = 0) {
//     return a + b + c + d;
// }

// int main() {
//     cout << "sum(10, 15) = " << sum(10, 15) << endl;
//     cout << "sum(10, 15, 25) = " << sum(10, 15, 25) << endl;
//     cout << "sum(10, 15, 25, 30) = " << sum(10, 15, 25, 30) << endl;

//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <cstring>

// using namespace std;

// int main(){

//     char name[100];
//     char longest[100];
//     int length = 0;

//     cout << "5명의 이름을 ';'으로 구분하여 입력" << endl;
//     cout << ">>";

//     for(int i = 0; i < 5; i ++)
//     {
//         cin.getline(name, 100, ';');
//         cout << i + 1 << ";" << name << endl;
//         if(length < strlen(name)){

//             length = strlen(name);
//             strcpy_s(longest, name);
            
//         }
        
//     }
//     cout << "가장 긴 이름: " << longest << endl;
    
// }

// #include <iostream>
// using namespace std;

// class rectangle
// {
// public:
//     int width;
//     int height;

//     int getArea(){

//         return width * height;

//     }
// };


// int main(){
//     rectangle r;
//     r.width = 100;
//     r.height = 200;

//     cout << "사각형의 면적:" << r.getArea() << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <cstring>


// using namespace std;

// class Car
// {
// public:
//     int speed;
//     int gear;
//     string color;

//     void speedUp() {speed += 20;}
//     void speedDown() { speed -= 10;}

// };


// int main()
// {
//     Car c1, c2;
//     c1.speed = 80;
//     c1.gear = 4;
//     c1.color = "red";
//     c1.speedUp();
//     cout << "현재 c1의 속도는 " << c1.speed << endl;

//     c2.speed = 70;
//     c2.gear = 4;
//     c2.color = "blue";
//     c2.speedUp();
//     cout << "현재 c2의 속도는 " << c2.speed << endl;

//     return 0;
// }   


// #include <iostream>
// #include <string>
// #include <cstring>
// using namespace std;


// class Calculator {
// private:
//     int add;
//     int sub;
//     int mul;
//     int div;
// public:
//     void init();
//     double Add(double, double);
//     double Sub(double, double);
//     double Mul(double, double);
//     double Div(double, double);
//     void ShowOpCnt();

// };

// void Calculator :: init() {

//     add = sub = mul = div = 0;
// }
// double Calculator :: Add(double a, double b) {
//     add++;
//     return a + b;
// }
// double Calculator :: Sub(double a, double b) {
//     sub++;
//     return a - b;
// }
// double Calculator :: Mul(double a, double b) {
//     mul++;
//     return a * b;
// }
// double Calculator :: Div(double a, double b) {
//     div++;
//     return a / b;
// }
// void Calculator::ShowOpCnt() {
//     cout << "덧셈: " << add << "  ";
//     cout << "뺄셈: " << sub << "  ";
//     cout << "곱셉: " << mul << "  ";
//     cout << "나누기: " << sub << "  ";
// }

// int main (void){
//     Calculator cal;
//     cal.init();

//     cout << cal.Add (6, 20) << endl;
//     cout << cal.Sub (6, 20) << endl;
//     cout << cal.Mul (6, 20) << endl;
//     cout << cal.Div (6, 20) << endl;





//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main ()
// {
//     int a, b;
//     char c;

//     cin >> a >> b;
//     cin >> c;

//     if(c == 'a')
//     {
//         cout << a + b;
//     }
//     else if(c == 's')
//     {
//         cout << a - b;
//     }
//     else if(c == 'm')
//     {
//         cout << a * b;
//     }
//     else if(c == 'd')
//     {
//         cout << a / b;
//     }
//     else
//     {
//         cout << "a, s, m ,d 중에 하나를 입력해라";
//     }


//     return 0;

// }

//-------------------------------------------------------------
//기말

//4.28
// #include <iostream>
// using namespace std;

//     class AAA
//     {
//         int i, j;
//     public:
//         AAA(int _i, int _j) // 생성자
//         {
//             i =_i, j = _j;
//         }
//         AAA()
//         {
//             cout << "insert coin" << endl;
//         }
//         void ShowData()
//         {
//             cout << i << ' ' << endl;
//         }
//     };

//     int main()
//     {
//         AAA aaa;
//         AAA bbb(111,222);
//         bbb.ShowData()


//         return 0;
//     }


    
// 예 01.
#include <iostream>
using namespace std;

class Time {
public:
    int hour; // 0-23
    int minute; // 0-59
    Time(int h, int m) {
            hour = h;
            minute = m;
    }
    void print() {
            cout << hour << ":" << minute << endl;
    }
};

int main()
{
   //Time a;
   Time b(10, 25);
   Time c{10, 25};
   Time d = {10, 25};
   
   b.print();
   c.print();
   d.print();
   return 0;
}

// 예 02







// 디폴트매개변수