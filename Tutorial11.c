#include <stdio.h>

int main()
{
    int age;
    printf("Guess the age of Father , Mother and Child\n Where if you guessed the age of Father you will get the Highest points and for Mother you will get average points and for Child you will get the lowest point \n  ");
    scanf("%d " , &age);
    switch(age)
    {
    case 35:
        printf("You have correctly guessed the age of Father \n You got 4 points \n  ");

        break;
        case 33:
         printf("You have correctly guessed the age of Mother \n You got 2 points \n  ");
         break;
         case 10:
          printf("You have correctly guessed the age of Child \n You got 1 point \n  ");
          break;
    default:
     printf("You have not correctly guessed the age  \n You have got eliminated \n  ");
    }
        return 0;
        
    }