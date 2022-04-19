//输入在一行中给出2个正整数M和N（1<=M<=N<=500）。
//在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。
#include<stdio.h>
int main() {
	int m, n;
	scanf_s("%d %d", &m, &n);
	int sum, cnt;
	cnt = 0;
	sum = 0;
	for (int i = m; i < n; i++) {
		int isPrime = 1;
		for (int j = 2; j < i;j++) {
			int x;
			x = i % j;
			if (x == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) {
			cnt++;
			sum = sum + i;
			printf("%d\n", i);
		}

	}
	printf("SUM=%d\nCNT=%d", sum, cnt);

}
