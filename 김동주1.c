#include <stdio.h>
int main(void)
{
	char letter1 = 0, letter2 = 0, letter3 = 0, letter4 = 0, letter5 = 0, letter6 = 0, letter7 = 0, letter8 = 0, letter9 = 0, letter10 = 0;
	int alphabet_sum = 0;

	printf("임의의 영문 대문자 10개를 입력하세요 : ");
	scanf_s("%c", &letter1);
	printf("아스키 코드값은 %d입니다.\n", letter1);
	printf("변환값은 %d입니다.\n", letter1 - 64);

	scanf_s(" %c", &letter2);
	printf("아스키 코드값은 %d입니다.\n", letter2);
	printf("변환값은 %d입니다.\n", letter2 - 64);


	scanf_s(" %c", &letter3);
	printf("아스키 코드값은 %d입니다.\n", letter3);
	printf("변환값은 %d입니다.\n", letter3 - 64);


	scanf_s(" %c", &letter4);
	printf("아스키 코드값은 %d입니다.\n", letter4);
	printf("변환값은입니다. %d\n", letter4 - 64);


	scanf_s(" %c", &letter5);
	printf("아스키 코드값은 %d입니다.\n", letter5);
	printf("변환값은입니다. %d\n", letter5 - 64);


	scanf_s(" %c", &letter6);
	printf("아스키 코드값은 %d입니다.\n", letter6);
	printf("변환값은 %d입니다.\n", letter6 - 64);


	scanf_s(" %c", &letter7);
	printf("아스키 코드값은 %d입니다.\n", letter7);
	printf("변환값은 %d입니다.\n", letter7 - 64);


	scanf_s(" %c", &letter8);
	printf("아스키 코드값은 %d입니다.\n", letter8);
	printf("변환값은 %d입니다.\n", letter8 - 64);


	scanf_s(" %c", &letter9);
	printf("아스키 코드값은 %d입니다.\n", letter9);
	printf("변환값은 %d입니다.\n", letter9 - 64);


	scanf_s(" %c", &letter10);
	printf("아스키 코드값은 %d입니다.\n", letter10);
	printf("변환값은 %d입니다.\n", letter10 - 64);

	alphabet_sum = letter1 - 64 + letter2 - 64 + letter3 - 64 + letter4 - 64 + letter5 - 64 + letter6 - 64 + letter7 - 64 + letter8 - 64 + letter9 - 64 + letter10 - 64;
	printf("10개 변환값의 합은 %d입니다.\n", alphabet_sum);
	return 0;
}