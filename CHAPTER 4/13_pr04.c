#include<stdio.h>

int main(){
    //What is factorial?
    // n!= 1*2*3*.....n
    //4!=1*2*3*4
    int factorial =1;
    int n=5;
    for (int i =1 ; i<=n; i++)
    {

        factorial *= i;

    }
    printf("The value of factorial is %d",factorial);

    return 0;
}