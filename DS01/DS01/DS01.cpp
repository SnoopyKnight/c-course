# include <stdio.h>
# include <stdlib.h>

int main()
{
	int x, y,i;
	int a,b,c,d,e;
	for (i = 0; i < 2; i++)
	{
		scanf_s("%d %d", &x, &y);
		
		a = x + y;
		b = x*y;
		c = x - y;
		d = x / y;
		e = x%y;
		printf("%d+%d=%d\n",x,y,a);
		printf("%d*%d=%d\n", x, y, b);
		printf("%d-%d=%d\n", x, y, c);
		printf("%d/%d=%d...%d\n",x,y, d, e);
		printf("================\n");
	}
	system("pause");
	return 0;
}