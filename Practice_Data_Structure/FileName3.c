#include <stdio.h>
#include <math.h>

int main()
{
	int m, n, i, j, isPrime=1;
	scanf("%d %d", &m, &n);

	for (i = m; i <= n; i+=2) {
		if (i == 1) i=2;
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime)
			printf("%d\n", i);
		if (i % 2 == 0)	i -= 1;
		isPrime = 1;
	}

	return 0;
}