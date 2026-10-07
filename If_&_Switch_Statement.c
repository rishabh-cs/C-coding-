#include <stdio.h>

//If and If else statement-

void main() {
    int a;
    
    printf("Enter value from 1-7 to find day : ");
    scanf("%d", &a);
    
    if (a == 1) {
        printf("Monday");
    }
    else if (a == 2) {
        printf("Tuesday");
    }
    else if (a == 3) {
        printf("Wednesday");
    }
    else if (a == 4) {
        printf("Thursday");
    }
    else if (a == 5) {
        printf("Friday");
    }
    else if (a == 6) {
        printf("Saturday");
    }
    else if (a == 7) {
        printf("Sunday");
    }
    else {
        printf("Out of range input");
    }
}

//switch statement-
int main() {
    int a;

  
    printf("Give value for day (1-7): ");
    scanf("%d", &a);

  
    switch (a) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Out of range input\n");
            break;
    }

    return 0;
}
