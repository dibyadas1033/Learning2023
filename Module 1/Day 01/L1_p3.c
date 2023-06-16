#include<stdio.h>
int main()
{
	int roll,m1,m2,m3,total;
	float percentage = 0.2f;
	char name[50];
	printf("Enter the Roll no:");
	scanf("%d",&roll);
	getchar();
	printf("Enter the name:");
	fgets(name,sizeof(name),stdin);
	printf("Enter the marks Of Physics maths Chemistry:\n");
	scanf("%d",&m1);
	scanf("%d",&m2);
	scanf("%d",&m3);
	total = m1+m2+m3; 
	percentage = (total/300.0) * 100;
	printf("Name of the student:%s\n",name);
	printf("Roll no:%d\n",roll);
	printf("Total marks obtained:%d\n",total);
	printf("percentage obtained:%0.2f\n",percentage);
	return 0;
}

