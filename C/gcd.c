#include<stdio.h>


int gcd ( int , int );

int main(void){


    int a=70;
    int b=28;
    int z;
    z=gcd(a,b);
    z=z+1;
    printf("the result is: %d",z);
    return 0;

}


    



int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }

}