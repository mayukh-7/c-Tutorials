#include <stdio.h>
int b = 34; // This is a global variable since it is declared outside main()
int ret(){
    return 43*34;
}
int func1(int b1)
{
    static int myvar; //ret(); we cannot do this as myvar only takes constant literal//
    // int loc=89;
    // printf("The address of b inside func1 is %d\n", &b);
    // printf("The value of b inside func1 is %d\n", b);
    printf("The value of my var is %d\n", myvar);
    myvar++;
    return myvar;
}
int main()
{
    int b = 344; // loc=45;
    int value = func1(b);
    value = func1(b);
    value = func1(b);
    value = func1(b);
    value = func1(b);
    int *ptr = &value;
    // printf("The value of func1 is %d \n", value);
    // printf("%d\n", loc);
    // printf("The address of b inside  main  is %d\n", &b);
    return 0;
}