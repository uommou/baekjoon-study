#include <stdio.h>

int main() {
	int num;
	int biggest = 0;
	int bigposition;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num);
		if (biggest < num) {
			biggest = num;
			bigposition = i + 1;
		}
	}
	printf("%d\n", biggest);
	printf("%d\n", bigposition);
}