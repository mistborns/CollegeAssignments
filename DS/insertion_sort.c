#include <stdio.h>
int main()
{
    int size,temp,j;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
     printf("the sorted array is:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
