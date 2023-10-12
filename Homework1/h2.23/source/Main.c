#include <stdio.h>

int main() {
	int a, b, c;

	printf("請輸入三個整數（以空白鑑區隔）：");
	scanf_s("%d %d %d", &a, &b, &c);

	int max = a;
	int min = a;

	if (b > max) {
		max = b;
	}

	if (c > max) {
		max = c;
	}

	if (b < min) {
		min = b;
	}

	if (c < min) {
		min = c;
	}

	printf("最大整數是：%d\n", max);
	printf("最小整數是：%d\n", min);

	return 0;
}