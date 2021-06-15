/* CH-230-A
  A6.6(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
// Macro to find least bit
#define L(x) x&1

int main()
{
	//declared char to use
	int i,shift;
    unsigned char ch;
	scanf("%c", &ch);

	//printed in decimal and binary
    printf("The decimal representation is: %d\n", ch);
	printf("The binary representation is: ");

	//for loop to shift by 7 fist then go on until 0 since
	//since we have 8 bits.
	for(i=7; i>=0; --i){
		shift = ch >> i;
		printf("%d", L(shift));
	}
	return 0;
}
