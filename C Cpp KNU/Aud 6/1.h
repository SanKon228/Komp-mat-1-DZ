#include <stdio.h>
#include <math.h>
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

