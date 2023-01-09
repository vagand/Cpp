#include <stdlib.h>

int main()
{
    int *p1 = (int*)malloc(sizeof(int) * 10);
    free(p1);

    int* p2 = new int;
    delete p2;

    int* p3 = new int[10];
    //delete p3 버그
    delete[] p3;
}