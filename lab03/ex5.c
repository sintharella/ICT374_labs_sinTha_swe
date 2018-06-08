#include <stdio.h>
#include <string.h>

int main(){

	#define BUF_SIZE  256

	int date;
	char month[BUF_SIZE];
	int year;

	printf("Please enter the date in the form of date-short_month-year, ");
	printf(" such 8-Aug-2006, where a month is written in exactly three letters: ");
	scanf("%d-%3s-%d", &date, month, &year);

	printf("the date you entered was:  %d-%3s-%d\n", date, month, year);

        return (0);
}
