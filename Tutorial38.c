#include <stdio.h>
int main()
{
    // typedef <previous_name> <alias_name>
    // typedef char c; // typedef function is used give alternate name to the previous existing data_type//
    // c a[20] = "DONE";
    // printf("%s", a);
    typedef int*     intpointer;
     intpointer a, b;
    int c = 89;
    a = &c;
    b = &c;
    printf("%d , %d ", *a, *b);
    return 0;
}