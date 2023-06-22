#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int calculateSecond(int,int,int);
int main()
{
    char str[200];
    int hh,mm,ss,res;
    printf("Enter time (HH:MM:SS) format: ");
    scanf("%s", str);
    printf("time entered : %s\n",str);
    hh = atoi(str);
    mm = atoi(str + 3);
    ss = atoi(str + 6);             
    res = calculateSecond(hh,mm,ss); 
    printf("time in Seconds:%d\n",res);
}
int calculateSecond(int hh,int mm,int ss)
{
    return (hh*3600 + mm*60 + ss);
}
