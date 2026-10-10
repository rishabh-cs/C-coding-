// Creating 3x3 Matric And taking input and giving output-


#include <stdio.h>
// for input-
int arrayinput(int x[3][3]){
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            printf("Give Your Matrix Input Element %d%d: ",i,j);
            scanf("%d",&x[i][j]);
        }
}
//for output-
int arrayoutput(int y[3][3]){
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            printf("Your Matrix Element %d%d is: %d\n",i,j,y[i][j]);
    printf("\n");
}


int main() {
    int arr[3][3];
    arrayinput(arr);
    arrayoutput(arr);
    
    return 0;
}
