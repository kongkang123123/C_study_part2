#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("dir");		// dir 명령어 실행
	printf("아무 키나 치세요\n");
	_getch();
	system("cls");		// 하나의 문자를 받는 함수

	return 0;
}