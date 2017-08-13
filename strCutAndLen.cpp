# include <stdio.h>
# include <string.h>
# include <conio.h>
# include <stdlib.h>


int main()
{	char mystr[100],a[100];
	printf("Input a string: ");
	gets(mystr);
	printf("Divided by what symbols: ");
	gets(a);
	char *p=a;
	p=strtok(mystr,a);
	while(p!=NULL)
	{
		printf("[%s] length = %d\n",p,strlen(p));
		p=strtok(NULL,a);
	}
	system("pause");
	return 0;
}