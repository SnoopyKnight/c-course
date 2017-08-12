#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_STACK_SIZE 100
int top=-1;
char stack[MAX_STACK_SIZE];

bool IsEmpty(){
	if (top==-1) return true;
	if (top>=0 && top<=99) return false;
}

bool IsFull(){
	if (top==99) return true;
	if (top>=-1 && top<=98)  return false;
}

void push(char item){
	if(top<MAX_STACK_SIZE-1)
		stack[++top]=item;
}

char pop(){
	if(top!=-1)
		return stack[top--];
}



int main()
{
	char *ptr;
	char s[MAX_STACK_SIZE];
	int i;

	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]=='(')
			push('(');
		if(s[i]==')'){
			if(IsEmpty()==true){
				printf("No\n");
				return 0;
			}
			pop();
		}
	}
	if(IsEmpty())
		printf("Yes\n");
	else
		printf("No\n");
	system("pause");
	return 0;
}
