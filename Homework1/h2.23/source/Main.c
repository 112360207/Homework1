#include <stdio.h>

int main() {
	int a, b, c;

	printf("�п�J�T�Ӿ�ơ]�H�ť�Ų�Ϲj�^�G");
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

	printf("�̤j��ƬO�G%d\n", max);
	printf("�̤p��ƬO�G%d\n", min);

	return 0;
}