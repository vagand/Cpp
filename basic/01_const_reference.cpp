#include <iostream>
using namespace std;

//c
// void foo(int x) { x = 20; }

//c++
void foo(const int& x)
{
    // x = 20;
}

int main()
{
    int a = 10;
    // 함수 호출 뒤에 a의 값은 변결되면 안된다.
    // c에서는 call by value를 사용하면 됨.

    // c++ 에서는 const reference 사용.
    // call by value를 사용하면 원본 데이터가 클때 복사시 오버헤드가 있음.
    // int 같은 기본 타입은 call by vaule를 사용하고
    // 사용자 정의 타입은 const reference 를 사용
    foo(a);

    cout << a << endl;
}