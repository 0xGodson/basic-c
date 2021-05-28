#include <stdio.h>

void main(){
	char file[1000];
	FILE *input,*output;

	input = fopen("PATH_TO/input.txt","r");
	fread(&file,sizeof(file),1,input);
	fclose(input);

	output = fopen("PATH_TO/output.txt","w");
	fprintf(output,"%s",file);
	fclose(output);
}
