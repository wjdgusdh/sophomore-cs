
//-------------------------------------------------------------
// 기말

// 4.28
//  #include <iostream>
//  using namespace std;

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
// #include <iostream>
// using namespace std;

// class Time {
// public:
//     int hour; // 0-23
//     int minute; // 0-59
//     Time(int h, int m) {
//             hour = h;
//             minute = m;
//     }
//     void print() {
//             cout << hour << ":" << minute << endl;
//     }
// };

// int main()
// {
//    //Time a;
//    Time b(10, 25);
//    Time c{10, 25};
//    Time d = {10, 25};

//    b.print();
//    c.print();
//    d.print();
//    return 0;
// }

// 예 02

// 디폴트매개변수

// 4.29

// #include <iostream>
// using namespace std;
//  class Rectangle
// {
//    public:
//         int width, height;
//         Rectangle();
//         Rectangle(int w, int h);
//         Rectangle(int length);
//         bool isSquare();
// };
// Rectangle :: Rectangle(){
//         width = height = 1;

// }
// Rectangle :: Rectangle(int w, int h) {
//         width = w;
//         height = h;
// }
// Rectangle :: Rectangle(int length) {
//         width = height = length;

// }
// bool Rectangle :: isSquare() {
//         if (width == height)
//             return true;
//         else
//             return false;

// }
// int main()
// {
//         Rectangle rect1;
//         Rectangle rect2(4,7);
//         Rectangle rect3(3);

//         if(rect1.isSquare())
//            cout << "rect1 정사각형" << endl;
//         if(rect2.isSquare())
//            cout << "rect2 정사각형" << endl;
//         if(rect3.isSquare())
//            cout << "rect2 정사각형" << endl;

// }

// #include <iostream>
// using namespace std;

// class Time
// {
//      int hour;
//      int min;
//      int sec;
// public:
//      Time(int h, int m, int s){
//         hour = h;
//         min = m;
//         sec = s;

//      }
//      void ShowTime(){

//      }
//      void ShowTimeSec(){
//         cout << hour *60*60+min*60 +sec <<endl;

//      }

// };

// int main()
// {
//         Time time1(5);
//         Time time2(6, 12);
//         Time time3(2, 43, 23);

//         return 0;

// }

// #include <iostream>
// #include <ctime>
// using namespace std;
// class Point
// {
//       int x;
//       int y;
// public:
//       Point() {
// cout << "Point() 호출" << endl;
// x = y = 0;
// }
//       Point(int _x, int _y) {
//          x = _x;
//          y = _y;
// }
//       int getX() { return x; }
//       int getY() { return y; }
//       void setX(int _x) { x = _x; }
//       void setY(int _y) { y = _y; }
// };

// int main(void)
// {
//       Point arr[5];
//       for (int i = 0; i < 5; i++)
// {
//             arr[i].setX(i * 2);
//             arr[i].setY(i * 3);
// }
// for (int j = 0; j < 5; j++)
// {
//             cout << "x: " << arr[j].getX() << ' ';
//             cout << "y: " << arr[j].getY() << endl;
// }
// return 0;

// }

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;
// template <typename T>

// void showinfo(const vector<T>& v);
// int main(void)
// {
//       vector<int> fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
//       vector<int> se01 = { 1, 3, 5, 7, 9 };
//       vector<int> se02 = { 2, 4, 6, 8, 10 };
//       vector<double> se03 = {1, 4, 3.14, 2.9, 6.5, 2.58 };
//       vector<string> se04 = {"adidas","puma","nike"};

//       showinfo(fibo);
//       showinfo(se01);
//       showinfo(se02);
//       showinfo(se03);
//       showinfo(se04);

//       // for (auto& number : fibo)
//       // cout << number << ' ';
//       // for (auto& number : se01)
//       // cout << number << ' ';
//       // for (auto& number : se02)
//       // cout << number << ' ';
//       // cout << endl;
//       // return 0

// }

// template <typename T>
// void showinfo(const vector<T>& v)
// {
//       for (const auto & number : v)
//       cout << number << ' ';
//       cout << endl;
// }

// #include <iostream>
// #include <vector>
// #include <string> // string 사용을 위해 추가해 주는 것이 좋습니다.

// using namespace std;

// template <typename T>
// void showinfo(const vector<T>& v);

// int main(void)
// {
//       vector<int> fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
//       vector<int> se01 = { 1, 3, 5, 7, 9 };
//       vector<int> se02 = { 2, 4, 6, 8, 10 };
//       vector<double> se03 = {1, 4, 3.14, 2.9, 6.5, 2.58 };
//       vector<string> se04 = {"adidas","puma","nike"};

//       showinfo(fibo);
//       showinfo(se01);
//       showinfo(se02);
//       showinfo(se03);
//       showinfo(se04);

//       return 0;
// }

// template <typename T>
// void showinfo(const vector<T>& v)
// {
//       
//       for (const auto& number : v)
//           cout << number << ' ';

//       cout << endl;
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>
// using namespace std;
// class Person {
// private:
//       string name;
//       int age;
// public:
//       Person(string n, int a)
//       {
//             name = n;
//             age = a;
//       }
//       string get_name() { return name; }
//       int get_age() { return age; }
//       void print() {
//                   cout << name << " " << age << endl;
//       }
// };
// bool compare(Person& p, Person& q)
// {
//       return p.get_age() < q.get_age();
// }
// int main(void)
// {
//       vector<Person> list;
//       list.push_back(Person("Kim", 30));
//       list.push_back(Person("Park", 29));
//       list.push_back(Person("Lee", 26));
//       list.push_back(Person("Jang", 32));

//       sort(list.begin(), list.end(), compare);

//       for (auto& e : list)
//             e.print();

//       return 0;
// }

// #include <iostream>
// #include <cstring>
// #define _CRT_SECURE_NO_WARNINGS
// using namespace std;
// class Person
// {
//     char* name;
//     char* phone;
//     int age;
// public:
//     Person(const char* name, const char* phone, int age);
//     ~Person();
//     void ShowData();
// };
// Person::Person(const char* name, const char* phone, int age)
// {
//     this->name = new char[strlen(name) + 1];
//     strcpy_s(this->name, strlen(name) + 1, name);

//     this->phone = new char[strlen(phone) + 1];
//     strcpy_s(this->phone, strlen(phone) + 1, phone);

//     this->age = age;
// }
// Person::~Person()
// {
//     delete[]name;
//     delete[]phone;
// }
// void Person::ShowData()
// {
//     cout << "name: " << name << endl;
//     cout << "phone: " << phone << endl;
//     cout << "age: " << age << endl;
// }
// int main()
// {
//     Person p1("Kim", "010-222-6666", 22);
//     Person p2(p1); // Person p2 = p1;
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// #define _CRT_SECURE_NO_WARNINGS
// using namespace std;

// class NameCard
// {
//     char*name;
//     char*phone;
//     char*addr;
//     char*position;
// public:
//     NameCard    (const char*,const char*,const char*,const char*);
//     NameCard(const NameCard& nc);
//     ~NameCard();
//     void ShowData();
// };

// #include <iostream>
// #include <cstring>
// #define _CRT_SECURE_NO_WARNINGS
// using namespace std;
// class Person
// {
//     int age;
//     char name[20];

// public:
//     int GetAge() const
//     {
//         return age;
//     }
//     const char *GetName() const
//     {
//         return name;
//     }
//     Person(int age = 1, const char *name = "noname")
//     {
//         this->age = age;
//         strcpy_s(this->name, strlen(name) + 1, name);
//     }
// };
// class Student : public Person
// {
//     char major[20];

// public:
//     Student(int age, const char *name, const char *major)
//     {
//         this->age = age;                              // 컴파일 에러
//         strcpy_s(this->name, strlen(name) + 1, name); // 컴파일 에러
//         strcpy_s(this->major, strlen(major) + 1, major);
//     }
//     const char *GetMajor() const
//     {
//         return major;
//     }
//     void ShowData() const
//     {
//         cout << "이름: " << GetName() << endl;
//         cout << "나이: " << GetAge() << endl;
//         cout << "전공: " << GetMajor() << endl;
//     }
// };
// int main(void)
// {
//     Student Lee(20, "Im Guk Junng", "Computer");
//     Lee.ShowData();
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// #define _CRT_SECURE_NO_WARNINGS
// using namespace std;

// class Account
// {
// private:
//     char acc_num[10];
//     int balance;
// public:
//     Account(char* num, int bal) {
//          strcpy_s(acc_num, strlen(num)+1, num);
//           balance = bal;
//     }
// };

// int main(void)
// {
//     // 계좌 번호: 1234-7896
//     // 초기 입금액: 5000원
//     // 이체 한도: 100000원
//     KB Acount acc("1234-7896", 5000, 100000);
//     acc.ShowData();
//     return 0;
// }




