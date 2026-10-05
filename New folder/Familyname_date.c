#include <stdio.h>

void zodiacSign(int month, int day) {
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)){
        printf("Zodiac Sign: Aries");
    }
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)){
       printf("Zodiac Sign: Taurus"); 
    }
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)){
       printf("Zodiac Sign: Gemini"); 
    } 
    
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)){
        printf("Zodiac Sign: Cancer");
    }
    
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)){
        printf("Zodiac Sign: Leo");
    }
     
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Zodiac Sign: Virgo");
    }
    
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)){
        printf("Zodiac Sign: Libra");
    }
     
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)){
        printf("Zodiac Sign: Scorpio");
    } 
    
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)){
        printf("Zodiac Sign: Sagittarius");
    } 
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Zodiac Sign: Capricorn");
    }
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Zodiac Sign: Aquarius");
    }
    else {
        printf("Zodiac Sign: Pisces");
    }
}

bool isValidDate(int month, int day, int year, int maxDays, int leap, char *monthnames[]) {
    bool isValid = true;
    // sa year
    if (year > 3000) {
        printf("Invalid year: %d\n", year);
        isValid = false;
    }
 // sa month 
    if (month < 1 || month > 12) {
        printf("Invalid month: %d\n", month);
        isValid = false;
    }
    
    //mao ni ang nag validate sa day
    if(day < 1 || day > 31) {
        printf("Invalid day: %d\n", day);
        isValid = false;
    }
     else if (month == 2 && day == 29 && !leap) { 
        printf("Invalid date: %s %d, %d\n", monthnames[month - 1], day, year);
        printf("%d is not a leap year\n", year);
        isValid = false;
    } 
    else if ( day > maxDays ) {
        printf("Invalid day: %d\n", day);
        isValid = false;
    }
    

    return isValid;
} 



int main(){
    int month, day, year;
    int validmonth, leap; 
    int monthdays [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *monthnames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("Input month, day and year:");
    scanf("%d %d %d", &month, &day, &year);
    leap = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
    monthdays[1] = leap ? 29 : 28;
    int maxDays = monthdays[month - 1];
    bool isValid = isValidDate(month, day, year, maxDays, leap, monthnames);
	 
 if ( isValid ) { 
    
    printf("Date entered: %s %d, %d\n", monthnames[month - 1], day, year);
    
    printf("%s has %d days\n", monthnames[month - 1], maxDays);
    
    zodiacSign(month, day);

}

    return 0;
}
