#include <stdio.h>
#include <math.h>
int nom_1() {
    float x, x2, x4;
    x = 5;
    x2 = x * x;
    x4 = x2 * x2;
    printf("x4=%f", x4);
}
int nom_2() {
    float x, x1, x2, result;
    x = 5;
    x1 = x * x;
    x2 = x1 * x1;
    result = x2 * x1;
    printf("result=%f", result);
}
int nom_3() {
    float x, x1, x2, x3;
    x = 5;
    x1 = x * x * x;
    x2 = x1 * x1;
    x3 = x2 * x1;

    printf("x3=%f", x3);
}

int nom_4() {
    float x, x1, x2, x3;
    x = 5;
    x1 = x * x * x;
    x2 = x1 * x1;
    x3 = x2 * x2 * x1;

    printf("x3=%f", x3);
}
int nom_5() {
    float x, x1, x2, x3, x4;
    x = 2;
    x1 = x * x; //・・2
    x2 = x1 * x1; //x ・4
    x3 = x2 * x2; //・・8
    x4 = x3 * x3 * x3 * x2;

    printf("x4=%f", x4);
}
int nom_6() {
    float x, x1, x2, x3, x4;
    x = 2;
    x1 = x * x; //・・2
    x2 = x1 * x1; //x ・4
    x3 = x2 * x2; //・・8
    x4 = x3 * x3; //x^16
    x3 = x4 * x4; //x^32 
    x2 = x3 * x3; //x^64

    printf("result=%f", x2);
}
int nom_7()
{
    double m1, m2, r, G, F;
    m1 = 155;
    m2 = 144;
    r = 1000;
    G = 6.673 * 1e-11;
    F = G * ((m1 * m2) / r * r);
    printf("%e", F);
}