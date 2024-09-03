// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n;
//     char *eID;
//     for (int i = 0; i < 3; i++)
//     {
    
//     printf("Enter the no of characters in your ID \n");
//     scanf("%d", &n);
//     eID=(char*)malloc((n+1)*sizeof(char));
//     printf("Enter your Employee ID \n");
//     scanf("%s", eID);
//     printf("Your Employee ID is %s \n", eID);

//     }
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id\n", i+1);
        scanf("%d", &chars);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *) malloc((chars+1)*sizeof(char));
        printf("Enter your Employee Id\n");
        scanf("%s", ptr);
        printf("Your Employee Id is %s\n",ptr );
        free(ptr);
        i = i + 1;
    }

    return 0;
}
