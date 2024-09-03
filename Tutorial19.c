#include <stdio.h>
// Functions basics//
int sum(int a, int b)//With arguments and with return value//
{
    return a + b;
}
void printstar(int n)//With arguments and without return value //
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*');
    }
}
int takenumber()//Without arguments and with return value//
{
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);
    return num;
}
void printyourname()//Without arguments and without return value//
{
    char m[20];
    printf("Enter your name \n");
    scanf("%s", &m);
    printf(" Your name is %s\n", m);
}
int main()
{
    int a, k, c;
    k = takenumber();
    printstar(7);
    c = sum(20, 42);
    printyourname();
    printf("The value is %d\n ", c);
    printf("The number entered  is %d\n ", k);
    return 0;
}
