//������һ���и���2��������M��N��1<=M<=N<=500����
//��һ����˳�����M��N�����������ĸ����Լ����ǵĺͣ����ּ��Կո�ָ���
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
