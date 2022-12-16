#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int	ans;

	printf("[第1問]\n");
	printf("SNSによる誹謗中傷何罪？\n");
	printf("1:名誉毀損罪  2:恐喝罪  3:傷害罪\n");
	printf(">>> ");
	scanf("%d", &ans);
	if (ans == 1) {
		printf("正解！\n\n");
	}
	else {
		printf("不正解...\n");
		printf("正解は 1:名誉毀損罪 です。\n\n");		
	}

	printf("[第2問]\n");
	printf("サイトのトップレベルドレイン正しいのは？\n");
	printf("1:「.xyz」  2:「.top」  3:「.jp」\n");
	printf(">>> ");
	scanf("%d", &ans);
	if (ans == 3) {
		printf("正解！\n\n");
	}
	else {
		printf("不正解...\n");
		printf("正解は 3:「.jp」です。\n");
		printf("1、2が犯罪に使われることが多い気をつけてください\n\n");
	}

	printf("[第3問]\n");
	printf("トラブルに巻き込まれないように載せてはいけないことは？\n");
	printf("1:店舗情報  2:個人情報  3:事実\n");
	printf(">>> ");
	scanf("%d", &ans);
	if (ans == 2) {
		printf("正解！\n\n");
	}
	else {
		printf("不正解...\n");
		printf("正解は 2:個人情報 です。\n");
		printf("リアルな世界で出来ないことはしない\n\n");
	}

	return 0;
}