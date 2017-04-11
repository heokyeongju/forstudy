#include<stdio.h>
int main() {
	int i, e, a;
	e = 0;
	i = 1;
	printf("숫자를 입력하시오");
	scanf("%d", &a);
	while (i <= a) {
		e = e + i;
		i++;
	}
	printf("%d", e);
}