#include<stdio.h>
int main() {
	int a, b, c, d, e, f;//변수 a,b,c,d,e,f를 선언한다.
	for (a = 1; a <= 8; a++) {//위
		for (e = 8; e > a; e--) {
			printf(" ");
		}
		for (b = 1; b <= a; b++) {//*
			printf("*");
		}
		printf("\n");
	}
	for (c = 9; c <= 16; c++) {//아래
		for (f = 9; f < c; f++) {
			printf(" ");
		}
		for (d = 16; d >= c; d--) {//*
			printf("*");
		}
		printf("\n");
	}
}