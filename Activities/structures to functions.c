#include <stdio.h>
#include <conio.h>

struct date {
	int year;
	int month;
	int day; 
};

void readDate(struct date *dateptr);
void printDate(struct date);

int main(){
	struct date today;
	readDate(&today);
	printDate(today);
	getch();
	return 0;
}

void printDate(struct date today){
	printf("%d/%02d/%d",today.month,today.day,today.year);	
}

void readDate(struct date *dateptr){
	scanf("%d %d %d",&(*dateptr).year,&(*dateptr).month,&(*dateptr).day);	
}

