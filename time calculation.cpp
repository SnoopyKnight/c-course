# include <stdio.h>
# include<stdlib.h>

int main()
{
	int day, hour, minute, second;
	int a, b, c, d;
	scanf_s("%d", &a);
	day = a*1.0 / 86400;
	b = a % 86400;
	printf("%d days\n", day);
	hour = b*1.0/ 3600;
	c = b % 3600;
	printf("%d hours\n", hour);
	minute = c*1.0 / 60;
	d = c % 60;
	printf("%d minutes\n", minute);
	second = d;
	printf("%d seconds\n", second);

	system("pause");
	return 0;
}