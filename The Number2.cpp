#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[100], b[100];
	int x, y;
	int i;
	int count;
	scanf_s("%d%d %d", &x, &y,a);
	for (i = 0; i < 100; i++)
	{
		while (a[i] == x){
			count++;
			a[i++];
			if (a[i++] == y){
				count++;
				a[i++];
			}
			else a[i++];
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}