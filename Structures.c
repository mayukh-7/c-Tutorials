#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[100];
    int roll;
    float sgpa;
} stud;
int main()
{
    // struct student s1 = {"Mayukh",565,9.2};

    // // s1.name = "Mayukh";

    // printf("Student name = %s \n",s1.name);
    // printf("Student roll = %d \n",s1.roll);
    // printf("Student sgpa = %f \n",s1.sgpa);
    // struct student *ptr = &s1;
    // printf("Student roll with pointers dot operator = %d \n",(*ptr).roll);

    // printf("Student roll with pointers arrow operator = %d \n", ptr->roll);
    // printf("Student sgpa with pointers arrow operator = %f \n",ptr->sgpa);
    stud s[5];
    printf("Enter the students information for 5 students \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", &s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%f", &s[i].sgpa);
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Student name = %s \n", s[i].name);
        printf("Student roll = %d \n", s[i].roll);
        printf("Student sgpa = %f \n", s[i].sgpa);
        printf("\n");
    }

    return 0;
}