#include <stdio.h>

int main() {
	int a, b;

	printf("�п�J��Ӿ�ơ]�H�Ů�Ϲj�^�G");
	scanf_s("%d %d", &a, &b);

	if (b != 0 && a % b == 0) {
		printf("%d �O %d �����ơC\n", a, b);
	}
	else {
		printf("%d ���O %d �����ơC\n", a, b);
	}

	return 0;
}

