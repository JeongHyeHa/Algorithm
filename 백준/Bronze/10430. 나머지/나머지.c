#include <stdio.h>

int main() {
	unsigned int A, B, C;
	scanf("%u%u%u", &A, &B, &C);
	
	printf("%u\n", (A + B) % C);
	printf("%u\n", ((A % C) + (B % C)) % C);
	printf("%u\n", (A*B) % C);
	printf("%u\n", ((A % C)*(B % C)) % C);
	return 0;
}
