#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr= fopen("Student.txt","w");

    int age;
    char name [100];
    float sgpa;

    printf("Enter the name , age, sgpa of the student  : ");
    scanf("%s %d %f", &name,&age,&sgpa);
    fprintf(fptr,"Student name : %s\n", name);
    fprintf(fptr,"Student age : %d\n", age);
    fprintf(fptr,"Student sgpa: %f\n", sgpa);
    return 0;
}