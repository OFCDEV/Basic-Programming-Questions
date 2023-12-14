#include <stdio.h>
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    
}
void main()
{
    int arr[] = {4,1,3,2,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The sorted array is:\n");
    sort(arr,size);
    printArray(arr,size);
    
}