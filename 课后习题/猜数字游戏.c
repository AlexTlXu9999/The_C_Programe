#include<stdio.h>
/// <summary>
/// 猜数字游戏是令系统随机产生一个100以内的正整数，
/// 用户输入一个数对其进行猜测，需要你编写程序自动对其与随机产生的被猜数进行比较，
/// 并提示大了（“Too big”），还是小了（“Too small”），相等表示猜到了。
/// 如果猜到，则结束程序。
/// 程序还要求统计猜的次数，如果1次猜出该数，提示“Bingo!”；
/// 如果3次以内猜到该数，则提示“Lucky You!”；
/// 如果超过3次但是在N（>3）次以内（包括第N次）猜到该数，则提示“Good Guess!”；
/// 如果超过N次都没有猜到，则提示“Game Over”，并结束程序。
/// 如果在到达N次之前，用户输入了一个负数，也输出“Game Over”，并结束程序。
/// </summary>
/// <returns></returns>
int main() {
	int x, y, cnt;
	cnt = 0;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	while (x != y) {
		cnt++;
		if (x < y) {
			printf("Too big!\n");
		}
		else if (x > y) {
			printf("Too small\n");
		}
		
		scanf_s("%d", &y);
	}
	if(x==y) {
	if (1 < cnt <= 3) {
		printf("Lucky You!\n");
	}
	else if (3 < cnt < 5) {
		printf("Good Guess!\n");
	}
	else if (cnt == 1) {
		printf("Bingo!\n");
	}
	else {
		printf("GameOver\n");
	}

		}
	return 0;
}
