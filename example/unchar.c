# include <stdio.h>

int main()
{
     
    unsigned char uc = 255; // char单独的部分 11111111 -------> 1,1111111  255 - 256
    char c;
    c = (unsigned char)uc;
    printf("uc = %d\n", uc);
    printf("c = %d", c);

    return 0;
}