#include <stdio.h>

int main() {
	unsigned int n, sum=0;
	scanf("%u", &n);

	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
