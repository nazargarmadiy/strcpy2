#include <stdio.h>

extern void strcpy2(char*a,char*b);

int memcpy2(char*d,char*s,int l)
{
    /*magic*/
    if(d > s)
    {
        s += l - 1;
        d += l - 1;
        while(l--)
            *d-- = *s--;
        return 0;
    }
    while(l--)
        *d++=*s++;
    return 0;
}


int main(int argc, char *argv[])
{
    char dst[100] = {'a', 'b', 'c', 'r'};
    char *str = "def";
    strcpy2(dst, str);
    printf("\n%s\n", dst);
    return 0;
}
