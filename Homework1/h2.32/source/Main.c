#include <stdio.h>

int main() {
	float weight, height, bmi;

	printf("�п�J�魫�]����^�G");
	scanf_s("%f", &weight);

	printf("�п�J�����]���ء^�G");
	scanf_s("%f", &height);

	bmi = weight / (height * height);

	printf("�z��BMI�Ȭ��G%.2f\n", bmi);

	if (bmi < 18.5) {
		printf("�魫�L��\n");
	}
	else if (bmi >= 18.5 && bmi <= 24.9) {
		printf("���`\n");
	}
	else if (bmi >= 25 && bmi <= 29.9) {
		printf("�W��\n");
	}
	else {
		printf("�έD\n");
	}

	return 0;
}