#include<stdio.h>
int main() {
	int a, b, c, d, e, f;//���� a,b,c,d,e,f�� �����Ѵ�.
	for (a = 1; a <= 8; a++) {//��
		for (e = 8; e > a; e--) {
			printf(" ");
		}
		for (b = 1; b <= a; b++) {//*
			printf("*");
		}
		printf("\n");
	}
	for (c = 9; c <= 16; c++) {//�Ʒ�
		for (f = 9; f < c; f++) {
			printf(" ");
		}
		for (d = 16; d >= c; d--) {//*
			printf("*");
		}
		printf("\n");
	}
}