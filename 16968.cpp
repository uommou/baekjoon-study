#include <stdio.h>

int main() {
	int type2;
	int type1 = '0';
	int sum = 1;
	while (true) {
		type2 = getchar();
		if (type2 == '\n')
			break;
		if (type2 == 'c') {
			if (type2 == type1)
				sum *= 25;
			else
				sum *= 26;
		}
		else if (type2 == 'd') {
			if (type2 == type1)
				sum *= 9;
			else
				sum *= 10;
		}
		type1 = type2;
	}
	printf("%d", sum);
}