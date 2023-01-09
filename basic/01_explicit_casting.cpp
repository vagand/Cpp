#include <iostream>

using namespace std;

int main()
{
#if 0
    //void* => int* 캐스팅 필요.
    int* p = static_cast<int*>( malloc(sizeof(int) * 10) );
    free(p);

    int n = 10;

    // double* p1 = &n;         //error
    double* p1 = (double*)&n;   //ok
    // double* p1 = static_cast<double*>(&n);   //error
    double* p1 = reinterpret_cast<double*>(&n);   //ok. C캐스팅과 유사. 대부분 성공.

    *p1 = 3.4;
#endif

#if 0
    const int c = 10;   //상수

    // int* p2 = &c;        //error
    int* p2  = (int*)&c;    //ok
    // int* p2  = static_cast<int*>(&c);    //error
    // int* p2  = reinterpret_cast<int*>(&c);    //error
    int* p2  = const_cast<int*>(&c);    //ok. 상수성 제거

    *p2 = 20;

    cout << c << endl;      //10
    cout << *p2 << endl;    //20
#endif
}