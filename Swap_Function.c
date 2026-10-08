
#include <stdio.h>

int swap(int,int);

int main() {int a,b;
            printf("Enter A: ");
            scanf("%d",&a);
            printf("Enter B: ");
            scanf("%d",&b);
            swap(a,b);
    return 0;
}
int swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    printf("Your new A: %d",x);
    printf("\nYour new B: %d",y);
}
