#include <stdio.h>

int main() {
	int num, A, B;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
	}
	return 0;
}