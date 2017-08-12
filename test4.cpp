#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[100] ;
	int x, y;
	int i;
	int count=0;
	scanf_s("%d%d %d", &x, &y,a);
	for (i = 0; i < 100; i++)
	{
		while (x == a[i]){
			a[i++];
			if (y==a[i+1]){
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