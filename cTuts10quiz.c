#include <stdio.h>

int main()
{
    int a;
    printf("Enter 1 if you have passed in Maths\n ");
    printf("Enter 2 if you have passed in Science \n");
    printf("Enter 3 if you have passed in both Maths and Science\n"); 
    scanf ("%d" , &a);
    if (a==1)
    {
         printf("You will receive a 15 rupees gift as you have passed in Maths  \n  ");
        
    }
    else if (a==2)
    {
        printf("You will receive a 15 rupees gift as you have passed in Science \n  ");
       
    }
    else if (a==3){
        printf("You will receive a 45 rupees gift as you have passed in both Maths and Science \n  ");
    }
    else{
        printf("You have not passed in any subject \n  ");
    }
  

    return 0;
}