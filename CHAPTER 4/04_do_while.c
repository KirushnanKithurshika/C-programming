// #include<stdio.h>

// int main(){
//     int i=1;
//     do{
//         printf("The value of i is %d", i);
//         i++;
//     }
//     while(i=<5);
//     return 0;
// }

#include <stdio.h>

int main() {
    int n, i = 1;

    // Input the value (e.g., 4)
    printf("Enter a number: ");
    scanf("%d", &n);

    // Use a while loop to print from 1 to n
    while (i <= n) {
        printf("%d", i);
        i++;
    }

    return 0;
}
