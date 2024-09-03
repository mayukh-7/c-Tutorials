#include <stdio.h>
int main()
{
   int a,b;
   printf("Enter a number a\n");
   scanf("%d", &a);
   printf("Enter a number b\n");
    scanf("%d", &b);
   //Arithmetic operators//
   printf("a+b=%d\n", a + b);
   printf("a-b=%d\n", a-b);
   printf("a*b=%d\n", a*b);
   printf("a/b=%d\n",a/b);
   printf("a % b=%d\n", a % b);
   // Logical operators//
   printf("a&&b=%d\n", a&&b);
   printf("a||b=%d\n", a||b);
   printf("a!b=%d\n", !(a && b));
   // Relational operator //
   printf("a==b=%d\n", a==b);
   printf("a!=b=%d\n", a!=b);
   printf("a>b=%d\n", a>b);
   printf("a<b=%d\n", a<b);
   printf("a>=b=%d\n", a>=b);
   printf("a<=b=%d\n", a<=b);
   // bitwise operator//
   printf("a&b=%d\n", a & b);
   printf("a|b=%d\n", a | b);
   printf("a^b=%d\n", a ^ b);
    return 0;
}
