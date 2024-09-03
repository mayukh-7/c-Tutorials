#include <stdio.h>
int isPalindrome(int n, int k)
{
    int m = n;
    int e = 0;
    int de, s;
    for (int i = k; i > 0; i--)
    {
        de = n % 10;
        n = n / 10;
        for (int j = 0; j < i - 1; j++)
        {
            de = de * 10;
        }
        e = e + de;
        de = 0;
    }
    printf("%d\n", e);
    if (e == m)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}
int main()
{
    int l;
    int o = 0;
    int num;
    int d;
    printf("Enter the number \n");
    scanf("%d", &num);
    int f = num;
    for (int i = 0; i < num + 10; i++)
    {
        d = num % 10;
        num = num / 10;
        if (num == 0)
        {
            o++;
            break;
        }
        else
        {
            o++;
        }
    }
    printf("The number of digits is %d\n", o);
    // l = isPalindrome(f, o);
    if (isPalindrome(f, o))
    {
        printf("The number is Palindrome\n");
    }
    else
    {

        printf("The number is not a Palindrome\n");
    }

    return 0;
}