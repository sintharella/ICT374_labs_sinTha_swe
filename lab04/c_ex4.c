#include <stdio.h>
#include <string.h>

int *getArray(int arraySize);

int main(){
	int *pi;
	int n;

	scanf("%d", &n);    // note this value can change at run-time
	pi = getArray(n);

	for (int i=0; i<n; ++i)
	    printf("a[%d]=%d\n", i, pi[i]);  // print each array element

	free(pi);  // once the array is no longer needed, you must free it
}

int * getArray(int arraySize)
{
	int *array;
	array = malloc(sizeof(int) * arraySize);

	for (int i=0; i<arraySize; ++i)
	    array[i] = i + 100;

	return array;
} 