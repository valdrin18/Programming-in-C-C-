/* CH-230-A
  A5.10(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <stdio.h>
//function where we also used recursive
void recursion(int number)
{
	//condition if number is 1, else we do the recursion
	if(number==1){
		printf("1");
	}
	else{
		printf("%d ", number);
		recursion(number-1);
	}
}
//main function
int main()
{   //scanned number and  used it in function recursion.
	int number;
	scanf("%i", &number);
	recursion(number);
	return 0;
}
