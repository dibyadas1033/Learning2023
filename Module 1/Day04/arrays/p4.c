#include<stdio.h>
void initArr(int [],int);
void EvenOdd(int [],int);
void disparr(int *,int);
int main()
{
    int arr[20];
    int size,s=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    initArr(arr,size);
    disparr(arr,size);
    EvenOdd(arr,size);
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
void EvenOdd(int arr[],int size)
{
    int even =0, odd=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2==0)
        even = even+arr[i];
        if (arr[i]%2!=0)
        odd = odd+arr[i];
    }
    printf("\n");
    printf("Difference even odd:%d",even-odd);

}
void disparr(int *arr,int size)
{
    printf("Array Elements:\n");
    for (int  i = 0; i < size; i++)
    {
        printf("%d\t",*(arr+i));
    }
    printf("\n");
}