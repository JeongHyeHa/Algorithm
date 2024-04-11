#include <stdio.h>
#include <string.h>

int main() {
	char userid[50] = { 0 };

	scanf("%s", userid);

	printf("%s%s", userid, "??!");
	return 0;
}