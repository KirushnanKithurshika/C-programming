#include<stdio.h>

int main() {
    int a = 26000;
    int b = 5;
    float c = 3.5;
    
    // Correct formula for the calculation
    float final_amount = a * (1 + (b * c));

    printf("The final amount is %f", final_amount);
    
    return 0;
}
