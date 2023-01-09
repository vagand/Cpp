#include <iostream>
using namespace std;

void int1(int x) {++x;}
void int2(int* p) {++(*p);}
void int3(int& r) {++r;}

int main()
{
    int a = 10, b = 20, c = 10;

    int1(a);
    int2(&b);
    int3(c);

    cout << a << endl;  //10
    cout << b << endl;  //21
    cout << c << endl;  //11
}