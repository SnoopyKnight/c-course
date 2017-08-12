#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_TERM 100
int main()
{
	char s[MAX_TERM];
	int i;
	printf("Please enter any letters:");
	gets(s);  //use scanf will stop when space
	int countA[26] = { 0 };
	int counta[26] = { 0 };
	for (i = 0; i<MAX_TERM; i++){
		if (s[i] >= 'a' && s[i] <= 'z')
			counta[s[i] - 'a']++;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			countA[s[i] - 'A']++;
	}
	printf("Letters frequency:\n");
	for (i = 0; i < 26; i++){
		if (countA[i]>0){
			printf("%c %d times\n", i + 'A', countA[i] );
		}
		if (counta[i]>0){
			printf("%c %d times\n", i + 'a', counta[i] );
		}
	}
	system("pause");
	return 0;
}