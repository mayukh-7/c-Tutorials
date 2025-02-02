#include <stdio.h>

int main()
{
    char k;
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;
start:
    while (1)
    {
        printf("Enter the input character. q to quit\n       1. kms to miles\n       2. inches to foot\n       3. cms to inches\n       4. pound to kgs\n       5. inches to meters\n");

        scanf(" %c", &input);
        //    printf("The character is '%c'", input);
        switch (input)
        {
        case 'q':
            printf("Quitting the program...\n");
            goto end;
            break;

        case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%.2f Kms is equal to %.2f Miles\n\n\n", first, second);
            goto end;
            break;

        case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%f Inches is equal to %f Foot\n", first, second);
            goto end;
            break;

        case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("%f Cms is equal to %f Inches\n", first, second);
            goto end;
            break;

        case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundToKgs;
            printf("%f Pounds is equal to Kgs %f \n", first, second);
            goto end;
            break;

        case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToMeters;
            printf("%f inches is equal to %f meters \n", first, second);
            goto end;
            break;

        default:
            printf("In default now");
            goto end;
            break;
        }
    }
end:

    printf("Press any key to continue and E for Exit !! \n");
    scanf(" %c", &k);
    if (k == 'e' || k == 'E')
    {
        goto completeEnd;
    }
    else
    {
        goto start;
    }
completeEnd:

    return 0;
}