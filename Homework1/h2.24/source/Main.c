#include <stdio.h>

int main() {
	int i;

	printf("請輸入一個整數：");
	scanf_s("%d", &i);

	if (i % 2 == 0) {
		printf("%d 是偶數。\n", i);
	}
	else {
		printf("%d 是奇數。\n", i);
	}

	return 0;
}