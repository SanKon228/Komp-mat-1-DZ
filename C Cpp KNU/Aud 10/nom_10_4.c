#include <stdio.h>

typedef struct {
int num;
int den; 
} Rational;
void show(Rational *r){
    printf("%d / %u",r->num,r->den);
}
int Add( Rational *r1,Rational *r2){
    Rational r3;
    if(r1->den == r2->den){
    r3.num=r1->num + r2->num;
    r3.den=r1->den;
    }
    else{
        int i,gcd;
        r3.den=r1->den*r2->den;
        r3.num=r1->num*r2->den+r2->num*r1->den;
    }
    show(&r3);
    return 0;
}
int Mn( Rational *r1,Rational *r2){
    Rational r3;
    r3.num=r1->num*r2->num;
    r3.den=r1->den*r2->den;
    show(&r3);
    return 0;
}
void eq( Rational *r1,Rational *r2){
    long double r3,r4;
    r3=(double)r1->num/(double)r1->den;
    r4=(double)r2->num/(double)r2->den;
    if(r3 == r4){
        printf("%d / %u == %d / %u ",r1->num,r1->den,r2->num,r2->den);
    }
    else if (r3 > r4)
    {
        printf("%d / %u > %d / %u ",r1->num,r1->den,r2->num,r2->den);
    }
    else if (r3 < r4)
    {
        printf("%d / %u < %d / %u ",r1->num,r1->den,r2->num,r2->den);
    }
}
int main(){
    Rational r1,r2;
    r1.num=1;
    r1.den=10;
    r2.num=2;
    r2.den=5;
    eq(&r1,&r2);
    return 0;
}
