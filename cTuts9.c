#include <stdio.h>
#define D 24
int main()
{
    int a;
    a=5;
    float b= 7.333;
    printf("The value is \n %d\n",a);
    printf("The value is \n %5d\n ",a);
    printf("The value is \n %f\n",b);
    printf("The value is \n %0.7f\n ",b);
    printf("The value is \n %10f\n",b);
    printf("The value is\n %-10f\n",a);
    const int c = 9;
   // c=3; it is not possible as c is a constant so the value of c does not change //
    //D= 23; it is not possible as D is defined in the preprocessor so its value will not change because it also acts as a constant  //
    return 0;
}
