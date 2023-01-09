template<typename T> T square(T a)
{
    return a * a ;
}

int main()
{
    int n = 3;
    short s = 3;
    double d = 3.3;

    square(n);
    square(d);
    square(s);
    square<int>(s); //int
}