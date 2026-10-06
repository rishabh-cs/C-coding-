// Break And Continue Use in C Language in Loop of 1-20 Number 

#include <stdio.h>

void main() {
    int a,b;
    
    printf("Give no. to skip In Loop between 1-10:");
    scanf("%d",&a);
    if(a>10){
        printf("Invalid \n");
        printf("Give no. to skip In Loop between 1-10:");
    scanf("%d",&a);
    }
    
    printf("Give no. to break the Loop between 11-20:");
    scanf("%d",&b);
    if(b<10){
        printf("Invalid \n");
        printf("Give no. to break the Loop between 11-20:");
    scanf("%d",&b);
    }
    

    for(int i=0;i<21;i++){
        if(i==a){
            continue;
        }
        else if(i==b){
            break;
        }
        printf("%d\n",i);
    }
}
