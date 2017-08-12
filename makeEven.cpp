# include <stdio.h>

void  makeEven(int a,int b)
{
	int *x;
	int *y;
	x = &a;
	y = &b;
	int sum=a+b;
	if(a+b>0)
	{
		if (sum%2==0)
		{
			*x=sum/2;
			*y=sum/2;
		}
		else
		{
			sum+=1;
			*x=sum/2;
			*y=(sum/2)-1;
		}	
	}

	if(a+b<0)
	{
		if (sum%2==0)
		{
			*x=sum/2;
			*y=sum/2;
		}
		if (sum%2<0)
		{
			sum-=1;
			*x=(sum/2)+1;
			*y=(sum/2);
		}
		else
		{
			sum+=1;
			*x=sum/2;
			*y=(sum/2)-1;
		}	
	}
}
int main() 
{
    int a, b, i;
    for (i = 0; i < 5; i++) 
	{
        printf("Please input two integers: ");
        scanf("%d%d", &a, &b);
        makeEven(a,b);
        printf("They become %d and %d\n", a, b);
    }
    return 0;
}