#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int days_Elapsed(int,int,int);
int check_leapYear(int);
int main()
{
    char str[100];
    int dd,mm,yy,res;
    printf("Enter date (dd/mm/yy) format: ");
    scanf("%s",str);
    printf("entered date : %s\n",str);
    // printf("%c\n",str[0]);
    // strcat(&str[0],&str[1]);
    // printf("%c\n",str[0]);
    // while (str[i]!='\0')
    // {
    //        printf("%c",str[i++]);
    // }
    // printf("\n");
    dd = atoi(str);
    mm = atoi(str + 3);
    yy = atoi(str + 6);
    res = days_Elapsed(dd,mm,yy);
    printf("Days Elapsed: %d\n",res);
    return 0;
}
int days_Elapsed(int dd, int mm, int yy)
{
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int s1=0,i=0;
    while(i<mm-1)
    {
        if(i==1 && check_leapYear(yy)==1)
        {
            s1= s1 + 29;
            // printf("\n%d --> %d \t ",i,s1);
        }
        else
        {
            s1= s1 + month[i];
            // printf("\n%d --> %d \t ",i,s1);
        }
        i++;
        
    }
    return (s1+dd);

}
int check_leapYear(int yy)
{
   return (((yy % 4 == 0) && (yy % 100 != 0)) ||
        (yy % 400 == 0));
}