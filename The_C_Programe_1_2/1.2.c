#include<stdio.h>
/// <summary>
/// 使用公式打印华氏温度雨摄氏温度对照表
/// C=（5/9）（F-32）
/// 当i=0，20，40....时，分别打印 
/// </summary>
/// <returns></returns>
int main() {
	int i, j, k;
	int lower, upper;//最低温和最高温
	lower = 0;
	upper = 300;
	k = 20;
	i = lower;
	while (i <=300) {
		j = 5* (i - 32)/9;
	
		printf("%d\t%d\n", i, j);
		i = i + k;
	}
	printf("%d", 5 / 9);
	return 0;
}