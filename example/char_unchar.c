# include <stdio.h>

int main()
{
    char c = -126;  // char单独的部分 1,1111110-------> 11111110  -126 + 256
    unsigned char uc;
    uc = (char)c;
    printf("uc = %d\n", uc);
    printf("c = %d", c);

    return 0;
}