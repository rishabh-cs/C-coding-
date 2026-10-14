#include <stdio.h>

void inputarr(int *, int);
void printarr(int *, int);

int main() {
    int size;
    printf("enter size of array: ");
    scanf("%d", &size);
    printf("confirmed your given size: %d\n", size);
    
    int arr[size]; 
    
    inputarr(arr, size);
    printarr(arr, size);
    
    return 0;
}

void inputarr(int *x, int size) {
    for(int i = 0; i < size; i++) {
        printf("enter your %d input: ", i + 1);
        scanf("%d", (x + i));
    }
    printf("input done\n");
}

void printarr(int *y, int size) {
    for(int i = 0; i < size; i++) {
        printf("your %d input is: %d\n", i + 1, *(y + i));
    }
    printf("output done\n");
}
