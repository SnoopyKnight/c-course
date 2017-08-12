#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char s[100];
	int i;
	scanf_s("%s", s);
	int count[26 + 26] = { 0 };
	for (i = 0; s[i] != '\0'; i++){
		if (s[i] >= 'a'&&s[i] <= 'z')
			count[s[i] - 'a']++;
		else if (s[i] >= 'A'&&s[i] <= 'Z')
			count[s[i] - 'A']++;
	}
	for (i = 0; i < 26; i++){
		if (count[i]>0)
			printf("%s %d\n", s[i], count[i]);
	}
	system("pause");
	return 0;
}