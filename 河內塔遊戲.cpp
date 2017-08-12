# include <stdio.h>
# include <stdlib.h>
int count = 0;
void printHanoi(int *start, int *other, int *goal)
{
	printf("***********************************\n");
	printf("After Moved %d Times: \n", count);
	int i, j, k;
	printf("A: ");
	for (i = 0; i <= 8; i++){
		if (start[i] == 0)
			break;
		printf("%d ", start[i]);
	}
	printf("\nB: ");
	for (j = 0; j <= 8; j++){
		if (other[j] == 0)
			break;
		printf("%d ", other[j]);
	}
	printf("\nC: ");
	for (k = 0; k <= 8; k++){
		if (goal[k] == 0)
			break;
		printf("%d ", goal[k]);
	}
	printf("\n");
}
void printHanoiTotal(int *start, int *other, int *goal)
{
	printf("***********************************\n");
	printf("Total Moved %d Times: \n", count);
	int i, j, k;
	printf("A: ");
	for (i = 0; i <= 8; i++){
		if (start[i] == 0)
			break;
		printf("%d ", start[i]);
	}
	printf("\nB: ");
	for (j = 0; j <= 8; j++){
		if (other[j] == 0)
			break;
		printf("%d ", other[j]);
	}
	printf("\nC: ");
	for (k = 0; k <= 8; k++){
		if (goal[k] == 0)
			break;
		printf("%d ", goal[k]);
	}
	printf("\n");
}
void Hanoi(int n, int *start, int *other, int *goal, int *A, int *B, int *C)
{
	int i = 0, j = 0;
	if (n == 1)
	{
		for (i = 8; i > 0; i--)
		{
			if (start[i] != 0)
				break;
		}
		for (j = 8; j >= 0; j--)
		{
			if (goal[j] != 0)
				break;
		}
		goal[j + 1] = start[i];
		start[i] = 0;
		count++;
		if (count % 5 == 0)
			printHanoi(A, B, C);
	}
	else
	{
		Hanoi(n - 1, start, goal, other, A, B, C);
		Hanoi(1, start, other, goal, A, B, C);
		Hanoi(n - 1, other, start, goal, A, B, C);
	}

}
int main()
{
	int n, i = 0, a[100] = { 0 }, b[100] = { 0 }, c[100] = { 0 };
	printf("Number of Discs: ");
	scanf_s("%d", &n);
	printf("***********************************\n");
	printf("Initial State: \n");
	for (i = 0; i<n; i++)
	{
		a[i] = n - i;
	}
	printf("A: ");
	for (i = 0; i <= 8; i++){
		if (a[i] == 0)
			break;
		printf("%d ", a[i]);
	}
	printf("\nB: \nC: \n");
	Hanoi(n, a, b, c, a, b, c);
	printHanoiTotal(a, b, c);



	system("pause");
	return 0;
}