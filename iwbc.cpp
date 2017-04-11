/*if while break continue*/
#include<stdio.h>
int main() {
	int a;
	while (true) {
		scanf("%d", &a);
		if (a == 0) {
			printf("정말 끝내시겠습니까?");
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