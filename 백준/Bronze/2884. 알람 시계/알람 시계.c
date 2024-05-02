#include <stdio.h>

int main()
{
	int hour, minute;
	scanf("%d %d", &hour, &minute);

	if (minute >= 45) {
		minute -= 45;
		printf("%d %d\n", hour, minute);
	}
	else if (minute < 45) {
		if (hour == 0) {
			hour = 23;
		}
		else
			hour--;
		minute += 15;
		printf("%d %d\n", hour, minute);
	}

	return 0;
}