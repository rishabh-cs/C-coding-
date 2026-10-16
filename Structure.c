
//basic structure 
#include <stdio.h>
struct intro{
  int age;
};
int main()
{
   struct intro s1;
    int a;
    printf("Enter Your age ");
    scanf("%d",&a);
    s1.age=a;
    printf("Your Age is %d",s1.age);
    return 0;
    
}
