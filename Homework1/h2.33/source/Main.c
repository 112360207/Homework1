#include <stdio.h>

int main() {
	float totalMiles, costPerUnitFuel, avgMilesPerUnit, parkingFee, tolls;

	
	printf("�п�J�@��Ѫ��`���{�ơ]�����^: ");
	scanf_s("%f", &totalMiles);

	printf("�п�J�T�o�@����/�[�ڪ�����: ");
	scanf_s("%f", &costPerUnitFuel);

	printf("�п�J�����@����/�[�گ��p�����{��: ");
	scanf_s("%f", &avgMilesPerUnit);

	printf("�п�J�@�Ѫ������O: ");
	scanf_s("%f", &parkingFee);

	printf("�п�J�@�Ѫ��q��O�]�L���O�^: ");
	scanf_s("%f", &tolls);

	
	float totalFuelCost = (totalMiles / avgMilesPerUnit) * costPerUnitFuel;
	float totalCost = totalFuelCost + parkingFee + tolls;


	printf("\n�p�⵲�G:\n");
	printf("�`�o�O: $%.2f\n", totalFuelCost);
	printf("�����O: $%.2f\n", parkingFee);
	printf("�q��O: $%.2f\n", tolls);
	printf("�`��O: $%.2f\n", totalCost);

	return 0;
}