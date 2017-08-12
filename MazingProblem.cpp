#include<stdio.h>
#include<stdlib.h>

# define MAX_SIZE  1000
char maze[MAX_SIZE][MAX_SIZE];
int top = -1;
int EXIT_ROW, EXIT_COL;

typedef struct{
	short int vert;
	short int horiz;
}offset;
offset move[8];

typedef struct{
	short int col;
	short int row;
	short int dir;
}element;
element stack[MAX_SIZE];

bool IsEmpty(){
	if (top == -1) return true;
	if (top >= 0 && top <= MAX_SIZE - 1) return false;
}
bool IsFull(){
	if (top == MAX_SIZE - 1) return false;
	if (top >= -1 && top <= MAX_SIZE - 1 - 1) return true;
}
void push(element item){
	if (top < MAX_SIZE - 1)
		stack[++top] = item;
}
void pop(element item){
	if (top != -1)
		stack[top++] = item;
}

void path(){
	int i, row, col, next_row, next_col, dir, found = false;
	element position;
	char mark[MAX_SIZE][MAX_SIZE];
	char maze[MAX_SIZE][MAX_SIZE];
	mark[1][1] = 1;
	top = 0;
	stack[0].row = 1;
	stack[0].col = 1;
	stack[0].dir = 1;
	while (top > -1 && !found){
		position = pop(position);
		row = position.row;
		col = position.col;
		dir = position.dir;
		while (dir < 8 && !found){   //move in direct dir
			next_row = position.row + move[dir].vert;
			next_col = position.col + move[dir].horiz;
			if (next_row == EXIT_ROW && next_col == EXIT_COL)
				found = true;
			else if (!maze[next_row][next_col] && !mark[next_row][next_col]){
				mark[next_row][next_col] = 1;
				position.row = row;
				position.col = col;
				position.dir = ++dir;
				push(position);
				row = next_row;
				col = next_col;
				dir = 0;
			}
			else
				++dir;
		}
	}
	if (found){
		printf("The path is:\n");
		for (i = 0; i <= top; i++)
			printf("(%2d%5d)", stack[i].row, stack[i].col);
		printf("(%2d%5d)", EXIT_ROW, EXIT_COL);
	}
	else
		printf("The maze dors not have a path.\n");
}


int main()
{
	int i, j, a, b, m, n ;
	int EXIT_ROW, EXIT_COL,START_X,START_Y;
	scanf("%d %d %d %d %d %d", a, b, START_X, START_Y, EXIT_ROW, EXIT_COL);  ////////////////
	EXIT_COL;    q = EXIT_ROW;
	for (i = 0; i < a+2; i++){
		for (j = 0; j < b+2; j++)
			scanf("%d%d", maze[i],maze[j]);
	}
	maze[1][1] = 0;   //入口
	maze[a - 1][b - 1] = 100;  //出口
	for (i = 0; i < a; i++){
		maze[i][0] = 1;
	}
	for (j = 0; j < b; j++){
		maze[0][j] = 1;
	}
}