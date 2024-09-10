#include<stdio.h>

int main(){
    int income;
    int tax = 0;
    
    // Take user input
    printf("Enter your income: \n");
    scanf("%d", &income);
    
    // Calculate tax based on income slabs
    if(income <= 250000){
        printf("Your income is less than or equal to 2.5 lakhs, so no tax for your salary.\n");
    }
    else if(income <= 500000 && income > 250000){
        tax = tax + 0.05 * (income - 250000);
        printf("Your income is between 2.5 lakhs and 5 lakhs.\n");
    }
    else if(income <= 1000000 && income > 500000){
        tax = tax + 0.05 * (500000 - 250000); // Tax for first slab (2.5L - 5L)
        tax = tax + 0.2 * (income - 500000);  // Tax for second slab (5L - 10L)
        printf("Your income is between 5 lakhs and 10 lakhs.\n");
    }
    else{
        tax = tax + 0.05 * (500000 - 250000); // Tax for first slab (2.5L - 5L)
        tax = tax + 0.2 * (1000000 - 500000); // Tax for second slab (5L - 10L)
        tax = tax + 0.3 * (income - 1000000); // Tax for income above 10L
        printf("Your income is above 10 lakhs.\n");
    }

    // Print the calculated tax
    printf("The calculated tax is: %d\n", tax);
    
    return 0;
}
