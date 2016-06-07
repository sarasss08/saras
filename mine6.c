#include <stdio.h>
 
int main(void) {
	long int year;
	scanf("%ld",&year);
	if(year%4==0)
	printf("\n Entered leap year");
	else
	printf("\n Not a leap year");
	// your code goes here
	return 0;
}
