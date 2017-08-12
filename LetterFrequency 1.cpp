#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_TERM 100
int main()
{
	char s[MAX_TERM];
	int i;
	gets(s);
	int countA[26] = { 0 };
	int counta[26] = { 0 };
	for (i = 0; i<MAX_TERM; i++){
		if (s[i] >= 'a' && s[i] <= 'z')
			counta[s[i] - 'a']++;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			countA[s[i] - 'A']++;
	}
	for (i = 0; i < 26; i++){
		if (counta[i]>0 || countA[i]>0)
			printf("%c %d\n",i + 'a', counta[i]+countA[i]);
	}
	system("pause");
	return 0;
}