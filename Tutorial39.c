#include <stdio.h>
#include <string.h>
union Employee
{
    int ID;
    int marks;
    char name[10];

} E1; //Union is a user defined data type which has single shared memory location

int main()
{
    E1.ID = 77;
    E1.marks = 78;
   strcpy( E1.name , "Kunal");
printf("Show ID , Marks  and  Name of Employee  %d  , %d , %s   respectively \n", E1.ID, E1.marks, E1.name);
    return 0;
}