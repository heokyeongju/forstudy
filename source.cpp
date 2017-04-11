#include<stdio.h>
int main() {
	double a;
	int b, c;
	printf("키를 입력하세요");
	scanf("%lf", &a);
	printf("키: %.2lf\n", a);
	printf("학번을 입력하세요");
	scanf("%d", &b);
	printf("학번: %d\n", b);
	printf("학년을 입력하세요");
	scanf("%d", &c);
	if (c == 1) {
		printf("새내기 %d\n", c);
	}
	else if (c == 2) {
		printf("으아아 %d\n", c);
	}
	else if (c == 3) {
		printf("하하 %d\n", c);
	}
	else {
		printf("하하하 %d\n", c);
	}
	
	return 0;
}