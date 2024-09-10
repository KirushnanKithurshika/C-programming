#include<stdio.h>

int main(){
    int age =45;
    switch(age)
    {
        case 24:
        printf("you are 24");
        break;
        case 25:
        printf("you are 25");
        break;
        case 26:
        printf("you are 26");
        break;

        default:
        printf("No case matched");
        break;

    }
    return 0;
}