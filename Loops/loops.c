#include  <stdio.h>

int square(int sideLen){
	char spacer[5] = "     ";
	int count = sideLen;
	printf("%d",sideLen);
	while(count > 0){
		printf("%c",'*');
		count--;
	}
	printf("\n");
	count = sideLen;

	return 0;
}