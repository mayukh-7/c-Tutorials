#include <stdio.h>
int main()
{
    printf("FILE name is %s\n", __FILE__);
    printf("DATE  is %s\n", __DATE__);
    printf("TIME  is %s\n", __TIME__);
    printf("LINE  is %d\n", __LINE__);
    printf("ANSI  is %d\n", __STDC__);

    return 0;
}
