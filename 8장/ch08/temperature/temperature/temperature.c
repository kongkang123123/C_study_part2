#include <stdio.h>

void printMenu() {
	printf("=================================\n");
	printf(" 'c' �����µ����� ȭ���µ��� ��ȯ\n");
	printf(" 'f' ȭ���µ����� �����µ��� ��ȯ\n");
	printf(" 'q' ����\n");
	printf("=================================\n");
}

double C2F(double c_temp) {
	return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp) {
	return (f_temp - 32.0) * 5.0 / 9.0;
}

int main(void) {
	char choice;
	double temp;

	while (1) {
		printMenu();
		printf("�޴����� �����ϼ���: ");
		choice = getchar();

		if (choice == 'q') {
			break;
		}
		else if (choice == 'c') {
			printf("�����µ�: ");
			scanf_s("%lf", &temp);
			printf("ȭ���µ�: %lf\n\n", C2F(temp));
		}
		else if (choice == 'f') {
			printf("ȭ���µ�: ");
			scanf_s("%lf", &temp);
			printf("�����µ�: %lf\n\n", F2C(temp));
		}
		getchar();		// ����Ű ���ڸ� �����ϱ� ���Ͽ� �ʿ�!;
	}

	return 0;
}