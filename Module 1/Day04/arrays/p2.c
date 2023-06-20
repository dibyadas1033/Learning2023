#include<stdio.h>
void initArr(int [],int);
void min_max(int [],int);
void dispArr(int [],int);
int main()
{
    int arr[20];
    int size,s=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    initArr(arr,size);
    dispArr(arr,size);
    min_max(arr,size);
    return 0;
}
void initArr(int arr[],int size)
{
    printf("Enter array Elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

}
void dispArr(int arr[],int size)
{
    printf("Array Elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    

}
void min_max(int arr[],int size)
{
    int max=arr[0],min=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("\n");
    printf("Max of Array :%d\n",max);
    printf("Min of Array :%d\n",min);

}