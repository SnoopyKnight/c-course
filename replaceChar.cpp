#include <stdio.h>
#include <stdlib.h>

int main() {
    char sent[300] = "The Dow Jones Industrial Average ended 32.62 higher, or 0.28%, to 11555.63;\nand the Nasdaq finished 11.83 lower, or 0.47%, to 2515.51.";
    printf("Before:\n%s\n\n", sent);
    char * p = sent;
    while (*p != '\0') {
        if(*p!='0' && *p!='1' && *p!='2' && *p!='3' && *p!='4' && *p!='5' && *p!='6' && *p!='7' && *p!='8' && *p!='9' && *p!='.' && *p!='%' && *p!='\n')
		{
			*p='_';// check if (*p) needs to be replaced as '_'
		}
			p++;
    }
    printf("After:\n%s\n", sent);
    system("pause");
	return 0;
}