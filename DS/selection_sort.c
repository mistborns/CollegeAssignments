#include <stdio.h>
int main()
{
    int size,temp,min;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size -1; i++)
    {
        min = i;
        for(int j = i + 1 ; j < size ; j++)
        {
            
            if( arr[min] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[min];
                arr[min] = temp;
            }
        }
    }
    printf("\nthe sorted array is:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
