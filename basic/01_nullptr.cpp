#include <iostream>

using namespace std;

void func(int *x) { cout << "int *" << endl; }
void func(int x) {cout << "int " << endl; }

int main()
{
    int *a = 0;
    int b = 0;
    int *c = nullptr;

    func(a);
    func(b);
    func(c);

    return 0;
}