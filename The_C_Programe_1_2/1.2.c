#include<stdio.h>
/// <summary>
/// ʹ�ù�ʽ��ӡ�����¶��������¶ȶ��ձ�
/// C=��5/9����F-32��
/// ��i=0��20��40....ʱ���ֱ��ӡ 
/// </summary>
/// <returns></returns>
int main() {
	int i, j, k;
	int lower, upper;//����º������
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