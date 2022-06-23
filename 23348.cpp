#include <stdio.h>
int main() {
	int type1, type2, type3;
	int num1, num2, num3;
	int club;
	int winnerscore = 0;
	int newscore;
	scanf("%d %d %d", &type1, &type2, &type3);
	scanf("%d", &club);
	for (; club > 0; club--) {
		newscore = 0;
		for (int i = 3; i > 0; i--) {
			scanf("%d %d %d", &num1, &num2, &num3);
			newscore += type1 * num1 + type2 * num2 + type3 * num3;
		}
		winnerscore = (winnerscore < newscore) ? newscore : winnerscore;
	}
	printf("%d", winnerscore);
}