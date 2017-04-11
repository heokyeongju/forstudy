#include<stdio.h>
int main() {
	int e=0, i = 1;
	while (i <= 10) {
		e = e + i;
		i++;
	}
	printf("%d", e);
}