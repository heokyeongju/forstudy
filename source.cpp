#include<stdio.h>
int main() {
	double a;
	int b, c;
	printf("Ű�� �Է��ϼ���");
	scanf("%lf", &a);
	printf("Ű: %.2lf\n", a);
	printf("�й��� �Է��ϼ���");
	scanf("%d", &b);
	printf("�й�: %d\n", b);
	printf("�г��� �Է��ϼ���");
	scanf("%d", &c);
	if (c == 1) {
		printf("������ %d\n", c);
	}
	else if (c == 2) {
		printf("���ƾ� %d\n", c);
	}
	else if (c == 3) {
		printf("���� %d\n", c);
	}
	else {
		printf("������ %d\n", c);
	}
	
	return 0;
}