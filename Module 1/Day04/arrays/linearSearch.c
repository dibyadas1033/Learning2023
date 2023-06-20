#include<stdio.h>
#include<stdbool.h>
void initArr(int [],int);
void linearSearch(int[],int);
void disparr(int *,int);
void swap(int*,int*);
int main()
{
    int arr[20];
    int size,s=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    initArr(arr,size);
    disparr(arr,size);
   linearSearch(arr,size);
   
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
void linearSearch(int arr[], int n)
{
    int ele,pos;
    bool flag;
    printf("Enter Element:");
    scanf("%d",&ele);
    for(int i = 0;i<n;i++)
    { 
        flag = false;
        if(arr[i]==ele)
        {
            flag = true;
            pos = i;
            printf("the element is found at :%d\n",pos);
            break;
        }
    }
    if(flag==false)
    printf("Element is not found\n");


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