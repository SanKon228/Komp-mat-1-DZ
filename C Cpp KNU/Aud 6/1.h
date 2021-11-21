#include <stdio.h>
#include <math.h>
int nom_6_1()
{
    unsigned char n;
    unsigned long long m;
    printf("n=");
    scanf("%hhu",&n);
    m=1<<n;  
    printf("m=%Lu",m);
    return 0;
}
int nom_6_2()
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
int nom_6_3()
{
    unsigned long long M;
    unsigned j;
    printf("Input M and j:\n");
    scanf("%Lu",&M);
    scanf("%u",&j);
    M = M & ~(1<<j);
    printf("M = %Lu %Lo %Lx", M, M, M);
}

int nom_7(){
    unsigned M = (1<<24) + (2<<16) + (3<<8) + 4;
    unsigned a1 = M & 0xFF;
    unsigned a2 = (M & 0xFF00)>>8;
    if ((a1==4) && (a2==3)) {
        printf("Little");
    }
    else if ((a1==4) && (a2==2)) {
        printf("Middle");
    }
    else if ((a1==1)) 
    {
        printf("Big");
    }
    else{
        printf("Unknown");
        }
    return 0;
}

