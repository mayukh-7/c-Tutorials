#include <stdio.h>

int main()
{
    int num, v;
    printf("Press 1 to convert kms to miles \n");
    printf("Press 2 to convert inches to foot \n");
    printf("Press 3  to convert cms to inches \n");
    printf("Press 4  to convert pound to kgs \n");
    printf("Press 5 to convert inches  to meters \n");
    scanf("%d", &num);
    switch (num)    
    {
    case 1: ;
    int kms;
       printf("Enter Your value in kms\n");
       scanf("%d", &kms);
        float miles= kms*0.623171;
        printf(" Your value in miles is  %f\n", miles);
        break;
        case 2: ;
        int inches;
        printf("Enter Your value in inches\n");
       scanf("%d", &inches);
        float foot=inches*0.08333;
        printf(" Your value in foot is  %f\n",foot);
        break;
        case 3: ;
        int cm;
        printf("Enter Your value in cms\n");
       scanf("%d", &cm);
        float inchess=cm*0.393701;
        printf(" Your value in inches is  %f\n",inchess);
        break;
        case 4: ;
        int pounds;
        printf("Enter Your value in pounds\n");
       scanf("%d", &pounds);
        float kgs=pounds*0.453592;
        printf(" Your value in kgs is  %f\n",kgs);
        break;
        case 5: ;
        int inch;
        printf("Enter Your value in inches\n");
       scanf("%d", &inch);
        float meters=inch*0.0254;
        printf(" Your value in foot is  %f\n",meters);
        break;



    
    default: 
     printf("You have entered a invalid value\n");
        break;
    }
   
   

    return 0;

   
}
