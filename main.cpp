#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int	ans;

	printf("[��1��]\n");
	printf("SNS�ɂ���排������߁H\n");
	printf("1:���_�ʑ���  2:������  3:���Q��\n");
	printf(">>> ");
	scanf("%d", &ans);
	if (ans == 1) {
		printf("�����I\n\n");
	}
	else {
		printf("�s����...\n");
		printf("������ 1:���_�ʑ��� �ł��B\n\n");		
	}

	printf("[��2��]\n");
	printf("�T�C�g�̃g�b�v���x���h���C���������̂́H\n");
	printf("1:�u.xyz�v  2:�u.top�v  3:�u.jp�v\n");
	printf(">>> ");
	scanf("%d", &ans);
	if (ans == 3) {
		printf("�����I\n\n");
	}
	else {
		printf("�s����...\n");
		printf("������ 3:�u.jp�v�ł��B\n");
		printf("1�A2���ƍ߂Ɏg���邱�Ƃ������C�����Ă�������\n\n");
	}

	printf("[��3��]\n");
	printf("�g���u���Ɋ������܂�Ȃ��悤�ɍڂ��Ă͂����Ȃ����Ƃ́H\n");
	printf("1:�X�܏��  2:�l���  3:����\n");
	printf(">>> ");
	scanf("%d", &ans);
	if (ans == 2) {
		printf("�����I\n\n");
	}
	else {
		printf("�s����...\n");
		printf("������ 2:�l��� �ł��B\n");
		printf("���A���Ȑ��E�ŏo���Ȃ����Ƃ͂��Ȃ�\n\n");
	}

	return 0;
}