/*if while break continue*/
#include<stdio.h>
int main() {
	int a;
	while (true) {
		scanf("%d", &a);
		if (a == 0) {
			printf("���� �����ðڽ��ϱ�?");
			scanf("%d", &a);
			if (a == 0) {
				continue;
			}
			else if (a == 1) {
				break;
			}
		}
	}
}