
#include "Rational(15_01).h"

void Rational::show(){
    std::cout<< nom<< "/"<<denom<<"\n";
}

int Rational::input(){
   std::cout<<"Input nom:";
   std::cin>>nom;
   std::cout<<"Input denom:";
   std::cin>>denom;

   reduce();

   return 0;
}

Rational Rational::add(const Rational& x){
    int t = (int)(this->nom * x.denom + denom * x.nom);
    unsigned y = x.denom * denom;
    return Rational(t,y);
}

Rational Rational::mult(const Rational& x){
    int t = nom * x.nom;
    unsigned y = x.denom * denom;
    return Rational(t,y);
}

unsigned Rational::gcd(unsigned x, unsigned y){
    if(y==0||x==0) return x+y;
    if(x>=y) return gcd(x%y,y);
    return gcd(y%x,x);
}

void Rational::reduce(){
    
    int nsd;
    if(nom>=0)
     nsd = (int)gcd(nom,denom);
    else
     nsd = (int)gcd(-nom,denom);

    nom /= nsd;
    denom /= nsd;
}


Rational Hregory(double eps){
    Rational s;
    int sign = -1;
    for(int i=2;eps*i*i<1;i++){
        Rational tmp;
        tmp.setNom(sign);
        sign = -sign;
        tmp.setDenom(i*i);
        s = s.add(tmp);
    }
    return s;
}


int main(){
    Rational r1,r2(2,3);
    r1.input();

    Rational r3 = r1.add(r2);
    Rational r4 = r1.mult(r2);
    r3.show();
    r4.show();
    unsigned p = Rational::gcd(60,35);
    std::cout<<p;
    Rational q = Hregory(0.01);
    q.show();
    std::cout<<q.compare(M_PI*M_PI/12.0);
}
