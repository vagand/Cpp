#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int x[10] = {1,2,3,4,5,6,7,8,9,0};
    for (auto n: x)
	    cout << n << endl;
}