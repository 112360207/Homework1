#include <stdio.h>

int main() {
	int i;

	printf("�п�J�@�Ӿ�ơG");
	scanf_s("%d", &i);

	if (i % 2 == 0) {
		printf("%d �O���ơC\n", i);
	}
	else {
		printf("%d �O�_�ơC\n", i);
	}

	return 0;
}