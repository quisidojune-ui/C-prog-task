#include <stdio.h>
int main(){
    int militaryTime, hours, minutes;
    const char *period;
    
    printf("Military Time:");
    if (scanf("%d", &militaryTime)!= 1 || militaryTime < 0 || militaryTime > 2359){
      printf("Invalid militaryTime.\n");  
    }
    hours = militaryTime / 100;
	minutes = militaryTime % 100;
    period = hours < 12 ? "am" : "pm";
	hours %= 12;
    if (hours == 0) hours = 12;
    if (hours > 23 && minutes > 59);
        printf("Standard time: %02d:%02d %s", hours, minutes, period);
    
    return 0;
}