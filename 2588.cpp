#include <stdio.h>

int main() {
	int inputA, inputB;
	int mul, output;
	int sum = 0;
	int ten = 1;
	scanf("%d %d", &inputA, &inputB);
	while (inputB > 0) {
		mul = inputB % 10;
		inputB /= 10;
		output = inputA * mul;
		printf("%d\n", output);
		sum += output * ten;
		ten *= 10;
	}
	printf("%d\n", sum);
}