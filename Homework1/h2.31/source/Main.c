#include <stdio.h>

int main() {
	printf("Number\tSquare\tCube\n");

	for (int j = 0; j <= 10; j++) {
		int square = j * j;
		int cube = j * j * j;
		printf("%d\t%d\t%d\n",j, square, cube);
	}

	return 0;
}