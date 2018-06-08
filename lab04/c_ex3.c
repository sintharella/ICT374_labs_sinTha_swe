#include <stdio.h>
#include <string.h>

void fillArray(int array[], int arraySize);

int main(){
	int *ai;
	int i;
	int n;

	scanf("%d", &n);    // note this value can change at run-time
	ai = malloc(sizeof(int) * n);

	for (i=0; i<n; ++i)
	    ai[i] = i + 100;    // initialise each array element

	for (i=0; i<n; ++i)
	    printf("a[%d]=%d\n", i, ai[i]);  // print each array element

	free(ai);  // once the array is no longer needed, you must free it
}
