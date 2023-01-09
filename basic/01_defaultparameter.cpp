void foo(int a, int b = 0, int c = 0);
void foo(int a, int b, int c)
{

}

int main()
{
    foo(1,2,3);
    foo(1,2);
    foo(1);
}