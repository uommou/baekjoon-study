#include <stdio.h>

int main() {
	int dice1, dice2, dice3;
	int prize;
	scanf("%d %d %d", &dice1, &dice2, &dice3);
	if (dice1 == dice2 && dice2 == dice3)
		prize = 10000 + dice1 * 1000;
	else if (dice1 == dice2 && dice2 != dice3)
		prize = 1000 + dice1 * 100;
	else if (dice2 == dice3 && dice2 != dice1)
		prize = 1000 + dice2 * 100;
	else if (dice3 == dice1 && dice2 != dice3)
		prize = 1000 + dice3 * 100;
	else {
		prize = dice1;
		if (prize < dice2)
			prize = dice2;
		if (prize < dice3)
			prize = dice3;
		prize *= 100;
	}
	printf("%d", prize);
}