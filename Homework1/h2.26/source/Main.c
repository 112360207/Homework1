#include <stdio.h>

int main() {
	int a, b;

	printf("請輸入兩個整數（以空格區隔）：");
	scanf_s("%d %d", &a, &b);

	if (b != 0 && a % b == 0) {
		printf("%d 是 %d 的倍數。\n", a, b);
	}
	else {
		printf("%d 不是 %d 的倍數。\n", a, b);
	}

	return 0;
}

