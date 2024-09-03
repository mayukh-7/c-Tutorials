#include <stdio.h>
#include <string.h>
struct Drivers
{
    char name[78];
    char LiscenseNo[19];
    char Route[127];
    char kms[72];
} d1, d2, d3;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            printf("Enter  Your name \n");
            gets(d1.name);
            printf("Enter Your Liscense No \n");
            gets(d1.LiscenseNo);
            printf("Enter Your route is \n");
            gets(d1.Route);
            printf("Enter your kms to travel \n");
            gets(d1.kms);
            printf(" Your name is %s\n  Your kms to travel is %s\n Your Liscense No is %s\n Your route is %s\n Your employee no is: D1\n", d1.name, d1.kms, d1.LiscenseNo, d1.Route);
        }
        else if (i == 1)
        {
            printf("Enter  Your name \n");
            gets(d2.name);
            printf("Enter Your Liscense No \n");
            gets(d2.LiscenseNo);
            printf("Enter Your route is \n");
            gets(d2.Route);
            printf("Enter your kms to travel \n");
            gets(d2.kms);
            printf(" Your name is %s\n  Your kms to travel is %s\n Your Liscense No is %s\n Your route is %s\n Your employee no is: D2\n", d2.name, d2.kms, d2.LiscenseNo, d2.Route);
        }
        else if (i == 2)
        {

            printf("Enter  Your name \n");
            gets(d3.name);
            printf("Enter Your Liscense No \n");
            gets(d3.LiscenseNo);
            printf("Enter Your route is \n");
            gets(d3.Route);
            printf("Enter your kms to travel \n");
            gets(d3.kms);
            printf(" Your name is %s\n  Your kms to travel is %s\n Your Liscense No is %s\n Your route is %s\n Your employee no is: D3\n", d3.name, d3.kms, d3.LiscenseNo, d3.Route);
        }
    }

    return 0;
} 
