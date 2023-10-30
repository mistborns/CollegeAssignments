#include <stdio.h>
int main()
{
    int size,temp;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                
            }
        }
    }
    printf("the sorted array is:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}
