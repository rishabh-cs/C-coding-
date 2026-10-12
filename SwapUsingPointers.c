//Call By Reference-
//Swapping Numbers Using Pointers And Functions.

#include <stdio.h>

void swap(int *,int *);

int main()
{
int a,b;
printf("Enter Value of A: ");
scanf("%d",&a);
printf("Enter Value of B: ");
scanf("%d",&b);
swap(&a,&b);
printf("New Value of A: %d\n",a);
printf("New Value of B: %d",b);
  
}

void swap(int *x,int *y){
  int temp=*x;
  *x=*y;
  *y=temp;
  printf("Your Given Values Are Swapped\n");
}
