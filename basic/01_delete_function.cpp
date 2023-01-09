int gcd(int a, int b) { return 0; }

// double gcd(double a, double b); 선언만 하면 link error
double gcd(double a, double b) = delete; //함수 삭제하면 compile error

int main()
{
	gcd(2,10);
	gcd(2.2,4.3); //int 함수가 불릴 가능성이 있음.
}