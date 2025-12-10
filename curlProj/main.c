#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "appdev.h"

int main(void){
	rock r;
	printf("Application Developers rock!\n");
	printf("Enter your name: ");
	scanf("%s", r.rname);
	srand(time(NULL));	// randomize the seed of rand() function
	r.max = rand()%50 + 51;
	r.min = rand()%50 + 1;
	send_data(r);
	printf("Rockn'Roll\n");
	return 0;	// no necessary in the newest C standard
}
