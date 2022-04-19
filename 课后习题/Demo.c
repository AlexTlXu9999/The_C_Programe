#include<stdio.h>
int main() {
	int n;//3<=n<=7
	scanf_s("%d", &n);
	int x, y,z,m,o;
	if (n = 3) {
		for (int i = 100; i < 999; i++) {
			x = i / 100;
			y = i / 10 % 10;
			z = i % 10;
			if (i == (x * x * x) + (y * y * y )+ (z * z * z)) {
				printf("%d\n", i);
			}
		}
	}
	if (n = 4) {
		for (int i = 1000; i < 9999; i++) {
			x = i / 1000;
			y = i / 100 % 10;
			z = i /10%10;
			m = i % 10;
			if (i == (x * x * x*x) + (y * y * y*y) + (z * z * z*z)+(m*m*m*m)) {
				printf("%d\n", i);
			}
		}
	}
}
