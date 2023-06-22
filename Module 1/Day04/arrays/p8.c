#include<stdio.h>
int days_Elapsed(int,int,int);
int check_leapYear(int);
int main()
{
    int dd,mm,yy,res;
    printf("Enter date (dd/mm/yy) format: ");
    scanf("%d/%d/%d", &dd, &mm, &yy);
    res = days_Elapsed(dd,mm,yy);
    printf("\n Days Elapsed: %d\n",res);
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