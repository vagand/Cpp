int main()
{
    int n = 0;

    // rvalue : 등호의 오른쪽에만 놓일 수 있다.
    // lvalue : 등호의 오른쪽과 왼쪽에 모두 놓일 수 있다.

    n = 10; //ok
    // 10 = n; //error

    // lvalue reference
    int& r1 = n;  //ok
    // int& r2 = 10; //error

    // rvalue reference
    // int&& r3 = n;   //error
    int&& r4 = 10;  //ok

    const int& r5 = n;   //ok
    const int& r6 = 10;  //ok
}