# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<conio.h>

int main()
{
	char m[100],n[100];
	char *a;
	int b;
		while(scanf("%s %s", n, m) != EOF) {
			a = strstr(m, n);
			b=0;
			while(a!=NULL){
				b++;
				a++;
				a = strstr(a, n);
			}
			printf("%d\n",b);
		}
	system("pause");
	return 0;
} 