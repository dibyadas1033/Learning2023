#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void left_Rotate(char *,int,int);
void right_Rotate(char *,int,int);
int main()
{

    char str[200];
    int k,x;
    while (1)
    {
        printf("\n Choice\n1- left Rotate\n2- right Rotate\n3- exit\n Enter your choice : ");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            printf("Enter string: ");
            scanf("%s", str);
            printf("Enter K: ");
            scanf("%d",&k);
            left_Rotate(str,strlen(str),k);
            break;
        case 2:
            printf("Enter string: ");
            scanf("%s", str);
            printf("Enter K: ");
            scanf("%d",&k);
            right_Rotate(str,strlen(str),k);
            break;
        case 3:
            exit(0);
            break;
        
        default:
            printf("invalid entry\n");
            break;
        }
    }
    
   
    
    return 0;

}
void left_Rotate(char *str,int size,int k)
{
    for (int i = 0; i < k; i++)
    {
        char temp = str[0];
        for (int j = 0; j < size - 1; j++) 
        {
            str[j] = str[j + 1];
        }
        str[size - 1] = temp;
    }
    printf("Rotated string: %s\n", str);

    

}
void right_Rotate(char *str,int size,int k)
{
   left_Rotate(str,size,size-1-k);
    
}
