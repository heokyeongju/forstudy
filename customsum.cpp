#include<stdio.h>
int main() {
	int i, e, a;
	e = 0;
	printf("���� �ϳ��� �Է��Ͻÿ�");
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		e = e + i;
	}
	printf("%d", e);
	return 0;
}