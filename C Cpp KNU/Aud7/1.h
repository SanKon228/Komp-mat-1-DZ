#include <stdio.h>
#include <math.h>

int nom_2()
{
    unsigned N;
    unsigned k;
    printf("N,k: ");
    scanf("%u",&N);
    scanf("%u",&k);
    N = N | (1<<k);
    printf("M=%u",N);
    return 0;
}
int nom_3()
{
    unsigned long long M;
    unsigned j;
    printf("Input M and j:\n");
    scanf("%Lu",&M);
    scanf("%u",&j);
    M = M & ~(1<<j);
    printf("M = %Lu %Lo %Lx", M, M, M);
    return 0;
}

int nom_1()
{
    unsigned char n;
    unsigned long long m;
    printf("n=");
    scanf("%hhu",&n);
    m=1<<n;  
    printf("m=%Lu",m);
    return 0;
}

