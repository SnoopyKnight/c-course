# include <stdio.h>
# include <stdlib.h>
int main()
{
	int n, i=0,j;
	for (j = 0; j < 5; j++)
	{
		scanf_s("%d", &n);
		for (n = 1; n <= i; n++)
		{
			while (i!=n)
			{
				n = n / i;
			}
			n++;
			for (i=0; i < n; i++)
			{
				printf("%d=%d*",n,i-1);
				printf("%d", i);
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}