#include <stdio.h>
void arrayrev(int arr[], int num)
{
    for (int i = num - 1; i >= 0; i--)
    {
        printf("%d,", arr[i]);
    }
}
int main()
{
    int i;

    int num;
    printf("Enter the number of elements you want in an array \n");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter Your %d element \n", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements inside the array before Reversal is  \n");
    for (int j = 0; j < num; j++)
    {
        printf("%d,", arr[j]);
    }
    printf("\n");
    printf("Elements inside the array after Reversal is  \n");
    arrayrev(arr, num);

    return 0;
}