/* CH-230-A
  A4.4(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[])
{   //declared vowels,consonants, and a total for all letters.
	int vowels=0, totalLetters=0, i;
    for(i=0; i<strlen(str); i++){
		switch (str[i]){
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
		//an if statement for total number to increase if letters entered.
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			totalLetters++;
		}

	}
	//in the end total minus them gives consonants.
	int consonants=totalLetters-vowels;
    return (consonants);

}

//code to write a string and call the function.
int main()
{
	char string[100];
	while (1){
		fgets(string, sizeof(string), stdin);
        if (string[0]=='\n'){
            break;
        }
        printf("Number of consonants=%i\n",count_consonants(string));
    }
	return 0;
}

