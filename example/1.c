# include <stdio.h>
# define b6_mask (1<<6)

int main()
{
    unsigned char regData;
    regData &= ~b6_mask; // Clear bit 6
    printf("regData after clearing bit 6: 0x%02X\n", regData);
    return 0;
}