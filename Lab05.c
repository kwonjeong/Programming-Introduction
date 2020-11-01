#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y){
    int bitsA = x & (~0 << p + 1);
    int bitsC = x & ~(~0 << p + 1 - n);
    int bitsE = (y & ~(~0 << n));
    bitsE = (bitsE << p + 1 - n);

    x = bitsA | bitsC;
    y = bitsE;
    
    return (x | y);
}


main(){
    printf("setbits(0x12345678,  7,  8,  0x89ABCDEF) = %X\n",
           setbits(0x12345678,7,8,0x89ABCDEF));
    printf("setbits(0x12345678,  15,  16,  0x89ABCDEF) = %X\n",
           setbits(0x12345678,15,16,0x89ABCDEF));
    printf("setbits(0x12345678,  15,  8,  0x89ABCDEF) = %X\n",
           setbits(0x12345678,15,8,0x89ABCDEF));
    printf("setbits(0x12345678,  9,  10,  0x89ABCDEF) = %X\n",
           setbits(0x12345678,9,10,0x89ABCDEF));
}
