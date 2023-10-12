#include <stdio.h>

int main() {
	float weight, height, bmi;

	printf("請輸入體重（公斤）：");
	scanf_s("%f", &weight);

	printf("請輸入身高（公尺）：");
	scanf_s("%f", &height);

	bmi = weight / (height * height);

	printf("您的BMI值為：%.2f\n", bmi);

	if (bmi < 18.5) {
		printf("體重過輕\n");
	}
	else if (bmi >= 18.5 && bmi <= 24.9) {
		printf("正常\n");
	}
	else if (bmi >= 25 && bmi <= 29.9) {
		printf("超重\n");
	}
	else {
		printf("肥胖\n");
	}

	return 0;
}