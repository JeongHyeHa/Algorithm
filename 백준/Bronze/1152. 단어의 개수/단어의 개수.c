#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000001];
	char delimiters[] = " ";
	char* token;
	int i = 0;

	gets(str);

	token = strtok(str, delimiters);

	while (token != NULL) {
		i++;
		token = strtok(NULL, delimiters);

	}


	printf("%d\n", i);
	
	return 0;
}