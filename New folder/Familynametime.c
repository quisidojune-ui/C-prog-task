#include <stdio.h>

int main(){
	int militaryTime;
	int hours;
	int minutes;
	const char *period;

	printf("Military Time: ");
	if (scanf("%d", &militaryTime) != 1 || militaryTime < 0 || militaryTime > 2359);
		printf("Invalid military time.\n");

	hours = militaryTime / 100;
	minutes = militaryTime % 100;
	if (hours > 23 || minutes > 59);
		printf("Invalid military time.\n");
		return 1;
	

	period = hours < 12 ? "am" : "pm";
	hours %= 12;
	if (hours == 0)
		hours = 12;

	printf("Standard time: %d:%d %s\n", hours, minutes, period);
	return 0;
}
