/* CH-230-A
  A6.7(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <stdio.h>
// Macro to find least bit
#define L(x) x&1

//function to make their least bits one
void set3bits(unsigned char *ch, int a, int b, int c){
    *ch |= (1<<a);
	*ch |= (1<<b);
	*ch |= (1<<c);
}

int main()
{
	//declared char to use
	int i,shift,a,b,c;
    unsigned char ch;
	scanf("%c", &ch);
	scanf("%d%d%d",&a,&b,&c);

	//printed in decimal and binary
    printf("The decimal representation is: %d\n", ch);
	printf("The binary representation is: ");

	//for loop to shift by 7 fist then go on until 0 since
	//since we have 8 bits.
	for(i=7; i>=0; --i){
		shift = ch >> i;
		printf("%d", L(shift));
	}
	printf("\n");
	set3bits(&ch,a,b,c);
	printf("After setting the bits: ");
		for(i=7; i>=0; --i){
		shift = ch >> i;
		printf("%d", L(shift));
	}
	printf("\n");

	return 0;
}
