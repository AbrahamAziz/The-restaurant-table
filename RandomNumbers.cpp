/*
An example to illustrate the generation a series of random numbers,
in this case 25 numbers between 1 and 10

Important: In the context of this project, you must use the function 'writeMyName'

*/
#include "Restaurant.h"
void main() {
	writeMyName("Smith", "Peter", 300123456);
	int n;
	for(int i = 0; i < 25; i++)
		printf("%3i", randomNumber(1, 10));
	printf("\n");
}