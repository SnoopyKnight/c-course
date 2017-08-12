# include <stdio.h>
# include <string.h>

void duplicateStr(char dest[], char *src, int n)
{
	dest[0] ='\0';
	if(n<=0)
	dest[0] ='\0';
	else
	{
		for(int i=0;i<n;i++)
		strcat(dest,src);
	}
}

int main()
{
	int i,n;
	char a[1000],b[1000];
	for(i=0;i<5;i++)
	{
		printf("Input a string: ");
		scanf("%s",a);
		printf("Duplicate how many times: ");
		scanf("%d",&n);
		duplicateStr(b,a,n);
		printf("The new string is [%s]\n",b);
	}
	return 0;
}