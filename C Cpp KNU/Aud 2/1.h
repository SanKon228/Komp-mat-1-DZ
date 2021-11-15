#include <stdio.h>
#include <math.h>
int nom_6(){
    float C;
    int F;
    printf("Enter degrees Celsius \n");
    scanf("%f", &C);
    F=9*C/5+32;
    printf("F=%d",F);
    return 0;
}
int nom_7(){
    float x, xr, xrof;
    int xmin, xmax, xro;
    printf("x=");
    scanf("%f",&x);
    if (x>0){
        xr=x-(int) x;
        xmin=x+1;
        xmax=x;
        xrof=x+0.5;
        xro=xrof;
    }
    else{
        xr=x+(int) x;
        xmin=x;
        xmax=x-1;
        xrof=x-0.5;
        xro=xrof;
    }
    printf("Integer part = %d \n",(int) x);
    printf("Fractional part = %f \n",x-(int) x);
    printf("Greater integer minimum = %d \n",xmin);
    printf("Less integer maximum = %d \n",xmax);
    printf("Rounded = %d \n",xro);
    printf("With formulas \n");
    xmin=ceil(x);
    xmax=floor(x);
    xro=round(x);
    printf("Integer part = %d \n",(int) x);
    printf("Fractional part = %f \n",x-(int) x);
    printf("Greater integer minimum = %d \n",xmin);
    printf("Less integer maximum = %d \n",xmax);
    printf("Rounded = %d \n",xro);
    return 0;
}
int nom_8(){
    float a, b, s, d;
    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    s=a+b;
    d=a-b;
    printf("%.2f \n",s);
    printf("%.2f \n",d);
    return 0;
}
int nom_9(){
    float a, b, av, avh;
    printf("Enter a and b \n");
    scanf("%f %f", &a, &b);
    av=(a+b)/2;
    avh=2/(1.0/a+1.0/b);
    printf("%le \n",av);
    printf("%le \n",avh);
    printf("%f \n",av);
    printf("%f \n",avh);
    return 0;
}
int nom2_1(){
    float x;
    printf("x=");
    scanf("%f",&x);
    printf("cos(x)=%f",cos(x));
    return 0;
}
int nom2_2(){
	float a, b, c;
	printf("Side a\n");
	scanf("%f", &a);
	printf("Side b\n");
	scanf("%f", &b);
    c=sqrt(a*a+b*b);
	printf("Side c \n%f",c);
	return 0;
}
int nom2_3(){
	float a, b, c, p, S;
	printf("Side a\n");
	scanf("%f", &a);
	printf("Side b\n");
	scanf("%f", &b);
	printf("Side c\n");
	scanf("%f", &c);
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("S=%f",S);
	return 0;
}