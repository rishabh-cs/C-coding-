
#include <stdio.h>
//Take input-
void inputarray(int x[]){
    printf("Give Your Input\n");
    for(int i=0;i<5;i++){
        printf("Enter %d Element: ",i+1);
        scanf("%d",&x[i]);
    }
}
//Sum the Element - 
void sumarray(int y[]){
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+y[i];
    }
    printf("Sum of Element is : %d ",sum);
}

int main() {
    int arr[5];
  //Now call both above created function one by one in order - 
    inputarray(arr);
    sumarray(arr);
    return 0;
}
