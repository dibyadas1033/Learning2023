#include<stdio.h>
#include <stdlib.h>
int main()
{
    char str[100];
    int res,num=0,i=0;
    printf("Enter a string: ");
    scanf("%s",str);
    res = atoi(str); // ** atoi --> converts string to integer
    printf("output is: %d \n", res);

    //loops using asci value
    while (str[i]!='\0')
    {
        num = num*10+(str[i]-48);
        i++;
    }
    printf("output(using For Loops) is: %d \n", num);
    
}