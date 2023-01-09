//C++에서 현재 파일에서만 사용가능
namespace
{
    void foo() {}
}

//c에서 현재 파일에서만 사용가능
//static void foo() {}

/*
현재 파일에서 ok
int main()
{
    foo();
}
*/

/*
분리된 파일에서 링크에러
//main.cpp
void foo();

int main()
{
    foo();
}
*/