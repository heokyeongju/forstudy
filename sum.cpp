#include<stdio.h>
int main() {
	int i, e;
	e = 0;
	for (i = 1; i <= 10; i++) {
		e = e + i;
	}
	printf("%d",e);
	return 0;
}