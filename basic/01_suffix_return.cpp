#include <iostream>
using namespace std;

auto square(int a) -> int
{
	return a * a;
}

int main()
{
    cout << square(2) << endl;
}