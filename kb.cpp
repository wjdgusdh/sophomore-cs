#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Account
{
private:
    char acc_num[20];
    int balance;

public:
    Account(const char* num, int bal) {
        // strcpy_s 대신 모든 컴파일러에서 작동하는 표준 strcpy를 사용합니다.
        strcpy(acc_num, num);
        balance = bal;
    }

    const char* GetAccNum() const {
        return acc_num;
    }
    int GetBalance() const {
        return balance;
    }
};

class KBAccount : public Account
{
private:
    int limit;

public:
    KBAccount(const char* num, int bal, int lim) : Account(num, bal) {
        limit = lim;
    }

    void ShowData() const {
        cout << "계좌 번호: " << GetAccNum() << endl;
        cout << "현재 잔액: " << GetBalance() << "원" << endl;
        cout << "이체 한도: " << limit << "원" << endl;
    }
};

int main(void)
{
    KBAccount acc("1234-7896", 5000, 100000);
    acc.ShowData();
    return 0;
}
