#include <stdio.h>
#include <math.h>

float fx(float y, float x){
    return x*(1+pow(x,2))/pow(y,2);
}

int main(){
    float a,b;
    scanf("Nhap a: %f", &a);
    scanf("Nhap b: %f",&b);
    int n;
    scanf("Nhap n: %d",&n);
    float delta_x = (b-a)/n;
    float y[n];
    float x[n];
    y[0] = 1;
    for(int i=0;i<n;i++){
        x[i] = a + i*delta_x;
        if(i==n)
            break;
        y[i+1] = y[i] + delta_x * fx(y[i],x[i]);
    }
    printf("Gia tri xap xi: %f", y[n-1]);
    return 0;
}