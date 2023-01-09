#include <iostream>
using namespace std;

// void f1(int a) {} //복사본 생성됨.
void f1(int& a) {}  //복사본 생성안됨.

int x = 10;

int f2() { return x; }  //x의 복사본 리턴(임시객체)
int& f3() { return x; } //x의 별명 리턴

// int& f4() { int y = 0; return y; } //지역변수 참조리턴 - 미정의 동작(undefined)

int main()
{
    int n = 10;
    f1(n);

    // f2() = 20;   //error. 리턴용 임시객체는 lvalue가 될수 없다.
    f3() = 20;  //ok. 전역변수 x에 20 넣기.

    cout << x << endl; //20
}