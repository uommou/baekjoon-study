#include <stdio.h>

int main() {
	int num;
	int weight = 1;
	int sum = 0;
	int star;
	int starcount;

	for (int count = 1; count <= 13; count++) {
		num = getchar();
		
		if (num == '*') {
			starcount = count;
			continue;
		}
		else {
			num -= 48;
			if (count % 2 == 0)
			weight = 3;
			else
				weight = 1;
			sum += num * weight;
		}

		
	}
	for (star = 0; star < 10; star++) {
		if (starcount % 2 == 0) {
			if ((star * 3 + sum) % 10 == 0) {
				printf("%d", star);
				break;
			}
		}
		else {
			if ((star + sum) % 10 == 0) {
				printf("%d", star);
				break;
			}
		}
	}

}

//틀렸는데 어디가 틀린건지 모르겠다
//#include <stdio.h>
//
//int main() {
//	int num;
//	int weight = 1;
//	int sum = 0;
//	int star;
//	int starcount;
//
//	for (int count = 1; count <= 13; count++) {
//		num = getchar();
//
//		if (num == '*') {
//			starcount = count;
//			continue;
//		}
//		else {
//			num -= 48;
//			if (count % 2 == 0)
//				weight = 3;
//			else
//				weight = 1;
//			sum += num * weight;
//		}
//
//
//	}
//	star = 10 - sum % 10;
//	if (starcount % 2 == 0) {
//		while (star % 3 != 0) {
//			star += 10;
//		}
//		star = star / 3;
//	}
//	printf("%d", star);
//}