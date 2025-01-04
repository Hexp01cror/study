#include <stdio.h>|
#include <stdlib.h>|

int main(void) {
	char * str = "ABCD"; // Hexadecimal: 41424344
		puts(str); // Sring output result: ABCD

	unsigned int num = 0;
	num = 0x41424344;
	printf("%x\n", num); // Hexadecimal output result: 41424344

	return 0;
}