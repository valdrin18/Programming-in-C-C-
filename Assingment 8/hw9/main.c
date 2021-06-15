/* CH-230-A
  A8.p9(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//main function
int main()
{
	//declared array for concat
	char arr[100];
	//variables for the number of files and loop
	int num, i;
	scanf("%d", &num);
	getchar();
	//created final file,and after n files with content
	FILE *f;

	f = fopen("output.txt", "wb");
	if (f==NULL) {
	    fprintf (f,"Cannot open file!\n");
		exit(1) ;
	}

	//loop to create n files,conditions if null.
	for(i=0; i<num; i++){
		FILE *fp;
		char filename[20];
		fgets(filename, sizeof(filename), stdin);
		filename[strlen(filename)-1] = '\0';
		fp = fopen(filename, "rb");
		if ( fp == NULL ) {
		    fprintf ( stderr , "Cannot open file!\n") ;
			exit(1) ;
		}
		// concatenate each with "output.txt"
		// used binary mode
		char buffer[64];
		char x = '\n';
		size_t size = fread(buffer, sizeof(char), 64, fp);
		fwrite(buffer, 1, size, f);
		fwrite(&x, 1, 1, f);
		fclose(fp); // closed every file after
	}
	//closed file f
	fclose(f);
	//opened f file to read and print the content
	f = fopen("output.txt", "rb");
	if ( f == NULL ) {
	    fprintf ( stderr , "Cannot open file!\n") ;
		exit(1) ;
	}
	//printed the concatenation
	printf("Concatenating the content of %d files ...\n", num);
	printf("The result is:\n");
	fread(arr, 1, 100, f);
	printf("%s\n", arr);

	//closed the final file and end the code here.
	fclose(f);

	return 0;
}
