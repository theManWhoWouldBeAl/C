#include  <stdio.h>
#include <time.h>


int main(int argc, char *argv[]){	
	printf("The loops are functional!");
	printf("\n");
	printf("\n");
	time_t seconds;

   seconds = time(NULL);
   printf("Seconds since January 1, 1970 = %ld\n", seconds);
	return 0;
}