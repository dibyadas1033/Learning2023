# include<stdio.h>
void biggest(int,int);
int main()
{
	int x,y;
	printf("Enter the two  number:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	biggest(x,y);
	return 0;
}
void biggest(int a,int b){
	int c;
	// using ternary operator
	printf("Using Ternanry Operator\n");
	c = a>b ? a:b;
	printf("greatest of %d and %d is %d\n",a,b,c);
	// using if else
	printf("\nUsing if else\n");
	if(a>b)
	printf("greatest of %d and %d is %d\n",a,b,a);
	else
	printf("greatest of %d and %d is %d\n",a,b,b);
}
