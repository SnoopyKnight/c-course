# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void PrintRandomPunish(){
	printf("�˥�");
}
void PrintRandomPerson(){
	int num;
	printf("Enter a Number (1~10000): ");
	scanf("%d",&num);
	if ( num == 1 )  printf("�Ժ�");
	else if ( num >= 7500 && num <= 9000 ) printf("����");
	else if ( num >= 100 && num <= 999 )  printf("�t���p��");
	else if (( num%1000 == 0 ) && num != 9000 ) printf("�@��");
	else if ( num == 27 ) printf("�����");
	else if ( num == 13 )  printf("�N��");
	else if ( num == 19 )  printf("�l��");
	else if ( num == 35 )  printf("����");
	else if ( num == 36 )  printf("����");
	else if ( num == 38 )  printf("�Ѥj");
	else if ( num == 30 )  printf("��_");
	else if ( num == 50 )  printf("�y��");
	else printf("���");
	printf("\n\n");
}

int PrintQuestion(){
	int k,q,c;
	k = rand();
	q = k%10;

	if ( q == 0 ){
		printf("�p�G�A�f���q�߱��,�q�߱��M����,�A�n���� ?\n");
		printf("1.�������ۧC\n2.���W�ߤ�,���ۧߤ�ƤU��\n3.����ߤ⪺�t�@��\n");
		scanf("%d",&c);
		if ( c == 3 )  printf("���ߵ���!");
		else {
			printf("�����g�@!\n");
			PrintRandomPunish();
		}
	}

	else if ( q == 7 ){
		printf("�ۦW�����¥����@���h�֭Ӥp�q�H\n");
		printf("1. 81\n2. 98\n3. 101\n4. 110\n5. 118\n6. 121\n7. 127\n");
		scanf("%d",&c);
		if ( c == 5 )  printf("���ߵ���!");
		else {
			printf("�����g�@!\n");
			PrintRandomPunish();
		}
	}
	
	else if ( q == 2 ){
		printf(" Windows.Net �޳N���֤߬O����H\n");
		printf("1.�����B�~�������w����\n2.��{�������p��\n3.�s�}�D�����K\n4.���ѹq�l�Ӱ�\n");
		scanf("%d",&c);
		if ( c == 4 )  printf("���ߵ���!");
		else {
			printf("�����g�@!\n");
			PrintRandomPunish();
		}
	}
	
	else if ( q == 43){
		printf("�ثe�[���쪺�Z�a�y�̪񪺤@����P���H\n");
		printf("1.´�k�y\n2.�P�k�y\n3.�b�H���y\n4.�j���y\n");
		scanf("%d",&c);
		if ( c == 3 )  printf("���ߵ���!");
		else {
			printf("�����g�@!\n");
			PrintRandomPunish();
		}
	}

	else if ( q == 4 ){
		printf("�� ���@�ɪ᫰���]�᳣�^���٪��O���ӫ����H\n");
		printf("1.�F��\n2.�۴�\n3.�ھ�\n4.���i���S��\n");
		scanf("%d",&c);
		if ( c == 3 )  printf("���ߵ���!");
		else {
			printf("�����g�@!\n");
			PrintRandomPunish();
		}
	}

	else if ( q == 9 ){
		printf("�����p���^���������٪��@���a�O�H\n");
		printf("1.���h��\n2.���楧��\n3.���y\n4.�����S\n");
		scanf("%d",&c);
		if ( c == 2 )  printf("���ߵ���!");
		else {
			printf("�����g�@!\n");
			PrintRandomPunish();
		}
	}

	else if ( q == 6 ){
		printf("�Q�C���@�ɤQ�j���Ұ��D�������O�H\n");
		printf("1.���ìV\n2.�g�a��z\n3.�j��ìV\n4.�U���ìV\n");
		scanf("%d",&c);
		if ( c == 2 )  printf("���ߵ���!");
		else {
			printf("�����g�@!\n");
			PrintRandomPunish();
		}
	}
	else if ( q == 1 ){
		printf("�m�ֺ��������׶��n�̪���Ĭ���������b�H\n");
		printf("1.Ĭ����\n2.�^����\n3.�R����\n4.�H�W�ҫD\n");
		scanf("%d",&c);
		if ( c == 2 )  printf("���ߵ���!");
		else {
			printf("�����g�@!\n");
			PrintRandomPunish();
		}
	}
	
	else if ( q == 8 ){
		printf("�a�y�����n�����h�֥��褽���H\n");
		printf("1.���d�U\n2.���ʸU\n3.���Q�U\n4.����\n");
		scanf("%d",&c);
		if ( c == 4 )  printf("���ߵ���!");
		else {
			printf("�����g�@!\n");
			PrintRandomPunish();
		}
	}

	else if ( q == 5 ){
		printf("�������O�����C��H\n");
		printf("1.����\n2.������\n3.����\n4.�զ�\n5.����\n6.���\n");
		scanf("%d",&c);
		if ( c == 4 )  printf("���ߵ���!");
		else {
			printf("�����g�@!\n");
			PrintRandomPunish();
		}
	}

	else
		return 0;

	printf("\n\n");
}

int main()
{
	srand (time_t(NULL));
	int num , question , ans , i=0 ;
	int    ma, ceo, c, h, bear, sister, monkey, kappa , k , big , sandy , canon , dog ;
		//��� ����� �@�� �Ժ� �N�� ���� ���� �p�� �l�� �M�� ��_ �y�� ����
	while(i>=0){
		PrintRandomPerson();    /* person */
		PrintQuestion();          /* question */
		i++;
	}
	system("pause");
	return 0;
}