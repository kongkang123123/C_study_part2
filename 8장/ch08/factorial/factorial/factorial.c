#include <stdio.h>

int factorial(int n) {
	int i;
	int result = 1;

	for (i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main(void) {
	int n;
	printf("알고 싶은 팩토리얼의 값은? ");
	scanf_s("%d", &n);
	printf("%d!의 값은 %d입니다.\n", n, factorial(n));

	return 0;
}