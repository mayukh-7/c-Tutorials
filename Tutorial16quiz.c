#include <stdio.h>

int main()
{
    int kg, g;
    printf("Enter the weight in kg to be converted in grams \n");
    scanf("%d", &kg);
    g = kg * 1000;
    printf("%d grams\n", g);
    return 0;
}
