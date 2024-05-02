#include <stdio.h>
#include <string.h>

int main()
{
	char str[100] = { 0 };
	int len;

	scanf("%s", str);

	len = strlen(str);
	
	for (char i = 'a'; i <= 'z'; i++) {
		char* result = strchr(str, i);
		int index = result - str;
		if(result != NULL)
			printf("%d ", index);
		else
			printf("%d ", -1);
	}
	return 0;
}