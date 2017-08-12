# include <stdio.h>
# include <stdlib.h>

int count = 0;

void printHanoi(int count, int *start, int *goal, int *other)
{
	int i, j, k;
	printf("A: ");
	for (i = 0; i <= 8; i++)
		printf("%d\n", start[i]);
	printf("B: ");
	for (j = 0; j <= 8; j++)
		printf("%d\n", goal[j]);
	printf("C: ");
	for (k = 0; k <= 8; k++)
		printf("%d\n", other[k]);
}

void Hanoi(int n, int *start, int *goal, int *other)
{
	int i = 0, j = 0;
	if (n == 1)
	{
		for (i = 8; i > 0; i--)
		{
			if (start[i] != 0)
				break;
		}
		for (j = 8; j > 0; j--)
		{
			if (goal[j] != 0)
				break;
		}
		goal[j + 1] = start[i];
		start[i] = 0;
		count++;
		return;
	}
	Hanoi(n - 1, start, other, goal);
	count++;
	Hanoi(1, start, goal, other);
	count++;
	Hanoi(n - 1, other, goal, start);
	count++;
}
int main()
{
	int n, i, a[100] = { 0 }, b[100] = { 0 }, c[100] = { 0 };
	printf("Number of Discs: ");
	scanf_s("%d", &n);
	printf("***********************************\n");
	printf("Initial State :\n");
	for (i = 0; i<n; i++)
	{
		a[i] = n;
		n--;
	}
		printf("A:%d \n", a);
		printf("B:%d \n", b);
		printf("C:%d \n", c);
	
	Hanoi(n, a, c, b);
	printf("***********************************\n");
	printf("After Moved 5 Times: \n");
	Hanoi(n, a, c, b);
	//printHanoi(n,a,c,b);
	printf("***********************************\n");
	printf("Total Moved 7 Times: \n");
	Hanoi(n, a, c, b);
	printf("A: \n", a);
	printf("B: \n", b);
	printf("C: \n", c);
	system("pause");
	return 0;
}