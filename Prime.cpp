# include <stdio.h>
# include <stdlib.h>

int main()
{
	int n, i ;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("%dªº¦]¼Æ: ", n);
	for (i = 1; i <= n; i++)
	{
		if (n%i == 0)
		printf("%d ", i);
	}
	system("pause");
	return 0;
}
