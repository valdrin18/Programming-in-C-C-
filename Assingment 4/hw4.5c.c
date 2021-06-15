/* CH-230-A
  A4.5(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
//same process as previous, but using pointers.
int count_consonants(char str[])
{   //declared vowels,consonants, and a total for all letters.
	int vowels=0, totalLetters=0, i;
	char *ptr=str;
    for(i=0; i<strlen(ptr); i++){
		switch (*(ptr+i)){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'y':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'Y':
				vowels++;
				// made the vowels count by cases using switch
		}
		//an if statement for total number using pointer to increase if letters entered.
        if((*(ptr+i)>='a' && (*ptr+i)<='z') || (*(ptr+i)>='A' && (*ptr+i)<='Z')){
			totalLetters++;
		}
	}
    //in the end total minus them gives consonants.
    int consonants=totalLetters-vowels;
    return (consonants);

}

//code to write a string and call the function.
int main()
{   char string[100];

	while (1){
        fgets(string, sizeof(string), stdin);
        if (string[0]=='\n'){
            break;
        }
        printf("Number of consonants=%d\n", count_consonants(string));
	}
return 0;
}

