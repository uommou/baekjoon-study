#include <stdio.h>

int main() {
	int read;
	int alphabet[26] = { 0 };
	//a=97
	while (true) {

		read = getchar();
		if (read == '\n')
			break;
		alphabet[read - 97] += 1;

	}



	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}
}