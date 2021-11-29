/* Special version of Nassarx.h to be used with the restaurant project, Winter 2017

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>   // needed if you use time(0) as a seed. You may use any other seed instead.

int randomNumber(int n1, int n2) {
	return rand()%(n2 + 1 -n1) + n1;
}
void writeMyName(char * last, char * first, int id) {
	puts("******************************************************************************");
	printf("Last name: %-21s" , last);
	printf("First name: %-21s" , first);
	printf("ID: %9i\n", id);
	puts("******************************************************************************");
	srand(time(0));
}

