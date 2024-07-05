#include <stdio.h>

int main()
{
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);

	printf("%d\n", A + B - C);

	if (B == 1000) printf("%d\n",A * 10000 + B - C);
	else if (B >= 100) printf("%d\n", A *1000 + B - C);
	else if (B >= 10) printf("%d\n", A *100 + B - C);
	else printf("%d\n", A * 10 + B - C);

	return 0;
}