#include <stdio.h>

int main() {
	int i;

	printf("叫块俱计");
	scanf_s("%d", &i);

	if (i % 2 == 0) {
		printf("%d 琌案计\n", i);
	}
	else {
		printf("%d 琌计\n", i);
	}

	return 0;
}