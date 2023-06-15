# include<stdio.h>
void greatest(int,int,int);
int main()
{
	int x,y,z;
	printf("Enter the thre  number:\n");
	scanf("%d %d %d",&x,&y,&z);
	greatest(x,y,z);
	return 0;
}
void greatest(int a,int b,int c){
	if(a>b && a>c)
	printf("greatest of %d,%d,%d is  %d\n",a,b,c,a);
    else if(b>a && b>c)
	printf("greatest of %d,%d,%d is %d\n",a,b,c,b);
	else
	printf("greatest of %d,%d,%d is %d\n",a,b,c,c);
}
