#include <stdio.h>
#include <string.h>

void fillArray(int array[], int arraySize);

int main(){
	int n;
	scanf("%d", &n);
	int ai[n];
	fillArray(ai,n);
		
	// print each array element
	// alternatively, printf("a[%d]=%d\n", i, ai[i])
	for (int i=0; i<n; ++i)
	    printf("a[%d]=%d\n", i, ai[i]);
}

void fillArray(int array[], int arraySize){

	for (int i=0; i<arraySize; ++i)
		scanf("%d", &array[i]);
		
}
