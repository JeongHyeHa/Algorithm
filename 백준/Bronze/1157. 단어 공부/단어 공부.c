#include <stdio.h>
#include <string.h>

int main() {
	int i, k, max=0, result, len;
	int alpha[26] = { 0, };
	char str[1000000];

	scanf("%s", str);

	//str[strlen(str)+1] = "\n";

	len = strlen(str);

	for(i=0; i < len; i++) {
		k = (char)tolower(str[i]) - 'a';
		alpha[k]++;
	}
	
	for (i = 0; i < 26; i++) {
		if (alpha[i] > max) {
			max = alpha[i];
			result = i;
		}
	}

	k = 0;
	for (i = 0; i < 26; i++) {
		if (max == alpha[i])
			k++;
	}

	if (k > 1)
		printf("?\n");
	else
		printf("%c\n", result + 'A');

	return 0;
}
