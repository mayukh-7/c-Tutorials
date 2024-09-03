#include <stdio.h>
int main()
{
    //  int a = 77;
    //  int *ptra = &a;
    //  printf("%d\n", ptra);
    //  ptra++;
    //  printf("%d\n", ptra);
    //  printf("%d\n", ptra - 2);
    int arr[] = {4, 5, 6, 7, 8, 9, 10};
    int *arrayptr = arr;
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of the first element  of the array is %d\n", &arr[0]);
    printf("The address of the first  element of the array is %d\n", arr);
    printf("The address of the second element of the array is %d\n", arr + 1);
    printf("The address of the second element of the array is %d\n", &arr[1]);
    printf("The address of the Third element of the array is %d\n", arr + 2);
    printf("The address of the Third element of the array is %d\n", &arr[2]);
    // printf("The address of the  of the array is %d\n", arr[3]);
    // arr++; This is wrong as it is  a constant
    arrayptr--;
    printf("The address of the second element of the array is %d\n", arrayptr);
    printf("The value at address of the first element  of the array is %d\n", *(&arr[0]));
    printf("The value at address of the second element of the array is %d\n", *(arr));
    printf("The value at address of the second element of the array is %d\n", *(arr + 1));
    printf("The value at address of the second element of the array is %d\n", *(&arr[1]));

    return 0;
}