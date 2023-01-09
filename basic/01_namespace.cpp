#include <iostream>

int main()
{
    std::cout << "aaa" << std::endl;

    using std::cout;
    using std::endl;
    cout << "aaa" << std::endl;

    using namespace std;
    cout << "aaa" << endl;
}