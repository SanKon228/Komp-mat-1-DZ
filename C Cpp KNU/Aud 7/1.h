#include <stdio.h>
#define N 5

int nom_1(){
    int mas[]={1,2,3,4,5,6,7,8,9,10};
    
    double a;
    scanf("%lf",&a);
    
    int count=0;
    for(int i=0;i<N;i++){
        if(mas[i]<a) count++;
    }
    printf("K=%d",count);
}
int nom_2(){
    int mas[N]={5, 112, 4, 3, 6};
    
    for(int i=N-1;i>=0;i--){
        printf("a[%d]=%d, ", i, mas[i]);
    }
}
