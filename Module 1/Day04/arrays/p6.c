#include<stdio.h>
void disparr(int *,int);
void dec_Bin(int ,int *);
void dec_Octal(int ,int *);
void dec_Hex(int);
int main()
{
    int res[20];
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    dec_Bin(num,res);
    dec_Octal(num,res);
    dec_Hex(num);
    return 0;
}
void dec_Bin(int num,int *res)
{
    int i=0,n=num;
    while(num>0)
    {
        *(res+i) = num % 2;
        num = num/2;
        i++;
    }
    printf("Binary of %d is :",n);
    disparr(res,i);
}
void dec_Octal(int num,int *res)
{
    int i=0,n=num;
    while(num>0)
    {
        *(res+i) = num % 8;
        num = num/8;
        i++;
    }
    printf("Octal of %d is :",n);
    disparr(res,i);
}
void dec_Hex(int num)
{
    int i=0,n= num,r;
    char hex[100];
    while(num>0)
    {
        r  = num % 16;
        if(r<10)
        r = r+48; // n<10  + 48 will get ascii value of that number
        else
        r = r+55;  // n<10  + 55 will get ascii value of that number
        hex[i++] = r;
        num = num/16;  
    }
    printf("Hexadecimal value of %dis: ",n);
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
    printf("\n");

}
void disparr(int *arr,int size)
{
    for (int  i = size-1 ; i > 0; i--)
    {
        printf("%d",*(arr+i));
    }
    printf("\n");
}