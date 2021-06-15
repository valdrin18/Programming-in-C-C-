/* CH-230-A
  A8.p8(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <stdio.h>

//switch funtion to check them
int isSeperator(char c){
    // check if a character is a seperator
    switch(c){
        case ' ':
        case ',':
        case '?':
        case '!':
        case '.':
        case '\t':
        case '\r':
        case '\n':
            return 1;
            break;
        default:
            return 0;
            break;
    }
}
//main function
int main(int argc, char** argv){
    char fname[100];
    fgets(fname, sizeof(fname), stdin);
    //retrieve the name of the file
    for(int i = 0; i < 100; i++){
        if(fname[i] == '\n')
            fname[i] = '\0'; //terminate the string
    }
    //opened file
    FILE* fptr = fopen(fname, "r");
    //decaled char and used count file
    int count = 0;
    char ch;
    char prevChar = '\n';
    //code to check if end of file
    while((ch = getc(fptr)) != EOF){
        //don't increase if you have done it
        if(isSeperator(ch) && !isSeperator(prevChar))
            count++;
        prevChar = ch;
    }
    //code to print the count of words
    printf("The file contains %d words.\n", count);
    fclose(fptr);

    return 0;
}
