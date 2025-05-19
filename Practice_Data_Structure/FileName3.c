#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 8001

// ������
double average(int* arr, int size) {
	int sum = 0;
	double avg;

	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	avg = (double)sum / size;
	if (avg > -1 && avg < 0)
		avg = 0;
	return avg;
}

// �߾Ӱ�
int compare(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}

// �ֺ�
int mode(int * nTemp, int *nArray, int size) {
	int max = 0, index = 0, isChange = 0;

	for (int i = 1; i < MAX_SIZE; i++) {
		if (nTemp[i] > max) {
			max = nTemp[i];
			index = i;
			isChange = 0;
		}
		else if (nTemp[i] == max && !isChange) {
			index = i;
			isChange = 1;
		}
	}

	if (max == 1)
		return nArray[1];
	return index - 4000;
}

int main()
{
	int n, range;
	int* nArray;
	int nTemp[MAX_SIZE] = { 0, };
	scanf("%d", &n);

	nArray = (int*)malloc(sizeof(int) * n);
	if (nArray == NULL)
		exit(1);

	for (int i = 0; i < n; i++) {
		scanf("%d", &nArray[i]);
		nTemp[nArray[i] + 4000]++;

	}

	// ������
	printf("%.0lf\n", average(nArray, n));

	// �߾Ӱ�
	qsort(nArray, n, sizeof(int), compare);
	printf("%d\n", nArray[n / 2]);

	// �ֺ� 
	if (n == 1)
		printf("%d\n", nArray[0]);
	else
		printf("%d\n", mode(nTemp, nArray, n));

	// ����
	if (n > 1)
		range = nArray[n - 1] - nArray[0];
	else
		range = 0;
	printf("%d\n", range);

	return 0;
}