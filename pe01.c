#include <stdio.h>
int total = 0;
int main() 
{
	for(int current=3; current < 1000; ++current) {
		if(current % 3 == 0 || current % 5 == 0)
			total += current;
	}
	printf("Total: %d\n",total);
	return 0;
}
