# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void PrintRandomPunish(){
	printf("倒立");
}
void PrintRandomPerson(){
	int num;
	printf("Enter a Number (1~10000): ");
	scanf("%d",&num);
	if ( num == 1 )  printf("煜綺");
	else if ( num >= 7500 && num <= 9000 ) printf("狗玄");
	else if ( num >= 100 && num <= 999 )  printf("飆風雷哥");
	else if (( num%1000 == 0 ) && num != 9000 ) printf("咖哩");
	else if ( num == 27 ) printf("執行長");
	else if ( num == 13 )  printf("刁薰");
	else if ( num == 19 )  printf("子喬");
	else if ( num == 35 )  printf("巧菁");
	else if ( num == 36 )  printf("巧菱");
	else if ( num == 38 )  printf("老大");
	else if ( num == 30 )  printf("梁榕");
	else if ( num == 50 )  printf("宜鑫");
	else printf("爛梗");
	printf("\n\n");
}

int PrintQuestion(){
	int k,q,c;
	k = rand();
	q = k%10;

	if ( q == 0 ){
		printf("如果你搭乘電扶梯時,電扶梯突然失控,你要怎麼辦 ?\n");
		printf("1.讓身體蹲低\n2.爬上扶手,順著扶手滑下來\n3.跳到扶手的另一邊\n");
		scanf("%d",&c);
		if ( c == 3 )  printf("恭喜答對!");
		else {
			printf("接受懲罰!\n");
			PrintRandomPunish();
		}
	}

	else if ( q == 7 ){
		printf("著名水城威尼斯共有多少個小島？\n");
		printf("1. 81\n2. 98\n3. 101\n4. 110\n5. 118\n6. 121\n7. 127\n");
		scanf("%d",&c);
		if ( c == 5 )  printf("恭喜答對!");
		else {
			printf("接受懲罰!\n");
			PrintRandomPunish();
		}
	}
	
	else if ( q == 2 ){
		printf(" Windows.Net 技術的核心是什麼？\n");
		printf("1.提供額外的網絡安全性\n2.實現分布式計算\n3.新開主頁更方便\n4.提供電子商務\n");
		scanf("%d",&c);
		if ( c == 4 )  printf("恭喜答對!");
		else {
			printf("接受懲罰!\n");
			PrintRandomPunish();
		}
	}
	
	else if ( q == 43){
		printf("目前觀測到的距地球最近的一顆恆星位於？\n");
		printf("1.織女座\n2.仙女座\n3.半人馬座\n4.大熊座\n");
		scanf("%d",&c);
		if ( c == 3 )  printf("恭喜答對!");
		else {
			printf("接受懲罰!\n");
			PrintRandomPunish();
		}
	}

	else if ( q == 4 ){
		printf("有 “世界花城”（花都）之稱的是那個城市？\n");
		printf("1.東京\n2.倫敦\n3.巴黎\n4.阿姆斯特丹\n");
		scanf("%d",&c);
		if ( c == 3 )  printf("恭喜答對!");
		else {
			printf("接受懲罰!\n");
			PrintRandomPunish();
		}
	}

	else if ( q == 9 ){
		printf("有“小提琴之王”之稱的作曲家是？\n");
		printf("1.貝多芬\n2.帕格尼尼\n3.海頓\n4.莫札特\n");
		scanf("%d",&c);
		if ( c == 2 )  printf("恭喜答對!");
		else {
			printf("接受懲罰!\n");
			PrintRandomPunish();
		}
	}

	else if ( q == 6 ){
		printf("被列為世界十大環境問題之首的是？\n");
		printf("1.水污染\n2.土地荒漠\n3.大氣污染\n4.垃圾污染\n");
		scanf("%d",&c);
		if ( c == 2 )  printf("恭喜答對!");
		else {
			printf("接受懲罰!\n");
			PrintRandomPunish();
		}
	}
	else if ( q == 1 ){
		printf("《福爾摩斯探案集》裡的“蘇格蘭場”在？\n");
		printf("1.蘇格蘭\n2.英格蘭\n3.愛爾蘭\n4.以上皆非\n");
		scanf("%d",&c);
		if ( c == 2 )  printf("恭喜答對!");
		else {
			printf("接受懲罰!\n");
			PrintRandomPunish();
		}
	}
	
	else if ( q == 8 ){
		printf("地球的表面積約為多少平方公里？\n");
		printf("1.五千萬\n2.五百萬\n3.五十萬\n4.五億\n");
		scanf("%d",&c);
		if ( c == 4 )  printf("恭喜答對!");
		else {
			printf("接受懲罰!\n");
			PrintRandomPunish();
		}
	}

	else if ( q == 5 ){
		printf("草莓的花是什麼顏色？\n");
		printf("1.紅色\n2.粉紅色\n3.紫色\n4.白色\n5.黃色\n6.橙色\n");
		scanf("%d",&c);
		if ( c == 4 )  printf("恭喜答對!");
		else {
			printf("接受懲罰!\n");
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
		//爛梗 執行長 咖哩 煜綺 刁薰 巧菁 巧菱 雷哥 子喬 映玟 梁榕 宜鑫 狗玄
	while(i>=0){
		PrintRandomPerson();    /* person */
		PrintQuestion();          /* question */
		i++;
	}
	system("pause");
	return 0;
}