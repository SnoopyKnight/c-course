#include <stdio.h>

void makeABS(int a[],int size)
{
	int *p;
	for(p=a;p<a+size;p++)
	{
		if(*p<0)
			*p=-(*p);
	}
}


int main()
{
	int i,n,j,k;
	int a[100];
	for(i=0;i<5;i++)
	{
		printf("Please enter the number of your data: ");
		scanf("%d",&n);
		printf("Please enter all the data: ");
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		makeABS(a,n);
		printf("Values in the array become");
		for(k=0;k<n;k++)
			printf(" %d ",a[k]);
			printf("\n\n");
	}
	return 0;	
}