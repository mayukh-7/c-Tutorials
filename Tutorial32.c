#include <stdio.h>
int func1(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value of elements of array is %d\n", arr[i]);
    }
    // arr[0]=227;//very important point that if you change any value here, it gets reflected in main()
    return 0;
}
int func2(int *ptr)
{

    for (int i = 0; i < 5; i++)
    {
        printf("The value of elements of array is %d\n", ptr[i]);
    }
    *(ptr + 1) = 18;
    return 0;
}
void func3(int arr2[][4])
{

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // int arr[] = {4, 5, 6, 7, 8};
    int arr1[2][4] = {{2, 3, 9, 1}, {4, 5, 6, 7}};
    // printf("The value of 1st element of the array  before using functions is %d\n", arr[0]);
    //  func1(arr);
    // func2(arr);
    // printf("The value of 1st element of the array after using functions is %d", arr[0]);
    // printf("The value of 2nd element of the array after using functions is %d", arr[1]);
    func3(arr1);
    return 0;
}