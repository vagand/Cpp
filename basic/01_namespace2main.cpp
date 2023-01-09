#include "01_namespace2.h"
#include <cstdio>

int main()
{
    Audio::init();
    printf("aaa\n");
    std::printf("aaa\n");
}

/*
//stdio.h
// int printf(char* fmt, ...);  //global space

//cstdio
#include <stdio.h>

namespace std
{
    using printf;
}
*/