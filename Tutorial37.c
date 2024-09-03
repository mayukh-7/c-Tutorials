#include <stdio.h>
struct Student
{
    int ID;
    int marks;
    char fav;
} Mayukh,Ayush,Amardeep;
//struct Student Mayukh, Ayush, Amardeep;
void print()
{
    printf("Mayukh's marks is given as : %d  \n", Mayukh.marks);
}

int main()
{

    Mayukh.ID = 1;
    Ayush.ID = 2;
    Amardeep.ID = 3;
    Mayukh.marks = 92;
    Ayush.marks = 82;
    Amardeep.marks = 72;
    Mayukh.fav = 'p';
    Ayush.fav = 'q';
    Amardeep.fav = 'r';
    printf("Mayukh ID,marks and favourite character is %d  ,%d , %c  respectively \n", Mayukh.ID, Mayukh.marks, Mayukh.fav);
    printf("Ayush ID,marks and favourite character is %d  ,%d , %c  respectively \n", Ayush.ID, Ayush.marks, Ayush.fav);
    printf("Amardeep ID,marks and favourite character is %d  ,%d , %c  respectively \n", Amardeep.ID, Amardeep.marks, Amardeep.fav);
    print();
    return 0;
}