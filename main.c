#include <stdio.h>

extern void strcpy2(char*a,char*b);

int main(int argc, char *argv[])
{
    char dst[100] = {'a', 'b', 'c', 'r'};
    char *str = "def";
    strcpy2(dst, str);
    printf("\n%s\n", dst);
    return 0;
}
