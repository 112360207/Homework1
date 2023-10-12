#include <stdio.h>

int main() {
	float totalMiles, costPerUnitFuel, avgMilesPerUnit, parkingFee, tolls;

	
	printf("請輸入一整天的總里程數（公里）: ");
	scanf_s("%f", &totalMiles);

	printf("請輸入汽油一公升/加侖的價格: ");
	scanf_s("%f", &costPerUnitFuel);

	printf("請輸入平均一公升/加侖能行駛的里程數: ");
	scanf_s("%f", &avgMilesPerUnit);

	printf("請輸入一天的停車費: ");
	scanf_s("%f", &parkingFee);

	printf("請輸入一天的通行費（過路費）: ");
	scanf_s("%f", &tolls);

	
	float totalFuelCost = (totalMiles / avgMilesPerUnit) * costPerUnitFuel;
	float totalCost = totalFuelCost + parkingFee + tolls;


	printf("\n計算結果:\n");
	printf("總油費: $%.2f\n", totalFuelCost);
	printf("停車費: $%.2f\n", parkingFee);
	printf("通行費: $%.2f\n", tolls);
	printf("總花費: $%.2f\n", totalCost);

	return 0;
}