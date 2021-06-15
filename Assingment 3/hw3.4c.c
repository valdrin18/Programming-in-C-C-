#include <stdio.h>
#include <stdlib.h>
/* CH-230-A
  A3.p4 Writing numbers (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
int position(char str[], char c)
{  //added semicolon and removed the comments
    int idx;
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx);
    return idx;
}
int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
}

