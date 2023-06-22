#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    printf("Entered String:");
    printf("%s\n",str);
    while(str[i]!='\0')
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
        else if (str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
        i++;
    }
    printf("Output String:");
     printf("%s",str);
    printf("\n");
    return 0;
    
}