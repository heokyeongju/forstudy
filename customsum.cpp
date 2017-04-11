#include<stdio.h>
int main() {
	int i, e, a;
	e = 0;
	printf("숫자 하나를 입력하시오");
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		e = e + i;
	}
	printf("%d", e);
	return 0;
}