#include <iostream>

using namespace std;

int main()
{
#if 0
    int n1 = 0;
    int& r1 = n1;

    int& r2;    //error. 반드시 초기화 필요.
#endif
    int n = 10; // 메모리 4바이트 핟당
    int* p =  &n;

    int& r = n; // 기존 메모리(변수)의 별칭을 부여

    cout << &n << endl; //0x61fe0c
    cout << &r << endl; //0x61fe0c

    r = 20;

    cout << n << endl;
}