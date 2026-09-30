#include <stdio.h>
#define DAYS 365
#define HOURS 24
#define SECONDS 3600 


int main() {
    int years = 18;

    int days = years * DAYS;
    int hours = days * HOURS;
    int seconds = hours * SECONDS;

    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n", seconds, hours, days, years);
    return 0;
}