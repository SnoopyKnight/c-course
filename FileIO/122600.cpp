# include <stdio.h>
# include <stdlib.h>

int main()
{
	char fname[1000];
	printf("請輸入檔名：");
	scanf("%s",fname);
	int asize;
	printf("陣列中有多少個整數？");
	scanf("%d",&asize);
		int *number=(int *)malloc(asize*sizeof(int));
		if (number==NULL) { exit(0);}
	
	FILE *fptr = fopen(fname,"rb");
		if (fptr == NULL)	{ printf("開檔失敗\n");return 0;}
		fread(number,sizeof(int),asize,fptr);
		fclose(fptr);

	number[0]=-1;number[2]=-999;
	fopen(fname,"wb");
	fwrite(number,sizeof(int),asize,fptr);
	int i,sum=0;
		for(i=0;i<asize;i++)
			sum+=number[i];
	printf("總和是 %d。\n",sum);

	system("pause");
	return 0;
}