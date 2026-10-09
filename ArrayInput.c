#include <stdio.h>

int main() {
    int x[5];
    
    printf("Give 5 input for x \n");
    
    // Loop to take 5 inputs from the user
    for (int i = 0; i < 5; i++) {
        scanf("%d", &x[i]); 
    }
    
    // Loop to print the stored array elements
    for (int i = 0; i < 5; i++) {
        printf("Your array element is: %d \n", x[i]);
    }
    
    return 0;
}
