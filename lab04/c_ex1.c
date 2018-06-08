#include <stdio.h>
#include <string.h>

int main(){
	int ai[10];
	int *pi;
	int i;

	// initialise each array element
	for (i=0; i<10; ++i)
	    ai[i] = i + 100;

	// let pi point to the array
	// alternatively, pi = &ai[0];
	pi = ai;
		
	// print each array element
	// alternatively, printf("a[%d]=%d\n", i, ai[i])
	for (i=0; i<10; ++i, ++pi)
	    printf("a[%d]=%d\n", i, *pi);
		       
}
