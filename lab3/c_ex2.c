#include <stdio.h>
#include <string.h>

int main(){
	int day = 8;
	char *month = "August";
	int year = 2006;

	printf ("Today is %04d %s %d.\n", day, month, year);

	FILE * fp;
	fp = fopen("foo2", "w+");

	if (fp == NULL){
		fprintf(stderr, "Cannot open file %s, terminate program\n", "foo2");
	}

	fprintf(fp, "Today is %04d %s %d.\n", day, month, year);
	fclose(fp);
	return (0);
}
