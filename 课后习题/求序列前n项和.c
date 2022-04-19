
#include<stdio.h>
/*输入格式：

输入在一行中给出一个正整数N。

输出格式：

在一行中输出部分和的值，精确到小数点后2位。题目保证计算结果不超过双精度范围。*/
int main() {
	int n;
	scanf_s("%d", &n);
	
	double sum=0;
	float x, y, z;
	x = 2.0f, y = 1.0f;
	for (int i = 0; i < n; i++) {

		sum = x / y + sum;
		z = x + y;
		y = x;
		x = z;
	}
	printf("%.2f", sum);
	return 0;
}
