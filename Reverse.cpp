#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING 100

int main()
{
	char a[MAX_STRING];
	char b[MAX_STRING];
	int  len;
	int  i, j;

	gets_s(a);
	len = strlen(a);

	for (i = 0, j = len - 1; i < len; i++, j--)
	{
		b[j] = a[i];
	}
	b[len] = '\0';
	printf("%s \n", b);
	system("pause");
	return 0;
}