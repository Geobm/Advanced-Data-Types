#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

struct date advanceDay(struct date tom)
{
    struct date tomorrow;
    int array[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }, temp;
    if (tom.year % 4 == 0) {
        array[2] = 29;
    }
    temp = tom.day + 1;
    if (temp > array[tom.month]) {
        if (tom.month == 12) {
            tomorrow.year = tom.year + 1;
            tomorrow.day = 01;
            tomorrow.month = 01;
        }
        else {
            tomorrow.day = 01;
            tomorrow.month = tom.month + 1;
            tomorrow.year = tom.year;
        }
    }
    else {
        tomorrow.day = tom.day + 1;
        tomorrow.month = tom.month;
        tomorrow.year = tom.year;
    }
    return tomorrow;
}
void readDate(struct date *nowptr) {
    scanf("%d%d%d", &((*nowptr).year), &((*nowptr).month), &((*nowptr).day));
}

void printDate(struct date now) {
    printf("%02d/%02d/%4d\n", now.month, now.day, now.year);
}



