#include <stdio.h>
int main(void)
{
	char letter1 = 0, letter2 = 0, letter3 = 0, letter4 = 0, letter5 = 0, letter6 = 0, letter7 = 0, letter8 = 0, letter9 = 0, letter10 = 0;
	int alphabet_sum = 0;

	printf("������ ���� �빮�� 10���� �Է��ϼ��� : ");
	scanf_s("%c", &letter1);
	printf("�ƽ�Ű �ڵ尪�� %d�Դϴ�.\n", letter1);
	printf("��ȯ���� %d�Դϴ�.\n", letter1 - 64);

	scanf_s(" %c", &letter2);
	printf("�ƽ�Ű �ڵ尪�� %d�Դϴ�.\n", letter2);
	printf("��ȯ���� %d�Դϴ�.\n", letter2 - 64);


	scanf_s(" %c", &letter3);
	printf("�ƽ�Ű �ڵ尪�� %d�Դϴ�.\n", letter3);
	printf("��ȯ���� %d�Դϴ�.\n", letter3 - 64);


	scanf_s(" %c", &letter4);
	printf("�ƽ�Ű �ڵ尪�� %d�Դϴ�.\n", letter4);
	printf("��ȯ�����Դϴ�. %d\n", letter4 - 64);


	scanf_s(" %c", &letter5);
	printf("�ƽ�Ű �ڵ尪�� %d�Դϴ�.\n", letter5);
	printf("��ȯ�����Դϴ�. %d\n", letter5 - 64);


	scanf_s(" %c", &letter6);
	printf("�ƽ�Ű �ڵ尪�� %d�Դϴ�.\n", letter6);
	printf("��ȯ���� %d�Դϴ�.\n", letter6 - 64);


	scanf_s(" %c", &letter7);
	printf("�ƽ�Ű �ڵ尪�� %d�Դϴ�.\n", letter7);
	printf("��ȯ���� %d�Դϴ�.\n", letter7 - 64);


	scanf_s(" %c", &letter8);
	printf("�ƽ�Ű �ڵ尪�� %d�Դϴ�.\n", letter8);
	printf("��ȯ���� %d�Դϴ�.\n", letter8 - 64);


	scanf_s(" %c", &letter9);
	printf("�ƽ�Ű �ڵ尪�� %d�Դϴ�.\n", letter9);
	printf("��ȯ���� %d�Դϴ�.\n", letter9 - 64);


	scanf_s(" %c", &letter10);
	printf("�ƽ�Ű �ڵ尪�� %d�Դϴ�.\n", letter10);
	printf("��ȯ���� %d�Դϴ�.\n", letter10 - 64);

	alphabet_sum = letter1 - 64 + letter2 - 64 + letter3 - 64 + letter4 - 64 + letter5 - 64 + letter6 - 64 + letter7 - 64 + letter8 - 64 + letter9 - 64 + letter10 - 64;
	printf("10�� ��ȯ���� ���� %d�Դϴ�.\n", alphabet_sum);
	return 0;
}