/*
 * This code probably looks pretty damn arcane.
 */
#include <stdio.h>
#define MAX 4000000
int sum = 0;
int older = 0;
int old = 0;
int main() {
	for(int new = 1; new < MAX; older = old, old = new, new = old + older) {
		if(new % 2 == 0)
			sum += new;
	}
	printf("Sum: %d\n",sum);
	return 0;
}

