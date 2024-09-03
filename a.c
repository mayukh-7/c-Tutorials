#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int input;
    char *ptr ;
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the length of the your employ id.\n");
        scanf("%d" , &input);
        ptr = (char*) calloc (input,sizeof(char));
        printf("Please enter your employ id.\n");
        scanf("%s" , &(*ptr));
        if (strlen(ptr)== input)
        {
            printf("The employ id of first employ is :" );
            for (int i = 0; i < input; i++)
            {
                printf("%c" , ptr[i]);
            } 
            printf("\n"); 
        }
        else
    {
        printf("Sorry invalid input of employee id given\n");
    } 
    
    }
     return 0;
}