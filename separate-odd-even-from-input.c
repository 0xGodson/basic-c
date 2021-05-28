#include <stdio.h>

void main(){
	FILE *input,*oddout,*evenout;
	int n;

	input = fopen("PATH_TO/input.txt","r");
	oddout = fopen("PATH_TO/oddout.txt","w");
	evenout = fopen("PATH_TO/evenout.txt","w");

	while (fscanf(input,"%d",&n) != -1){
		if (n % 2 == 0)
			fprintf(evenout,"%d\n",n);
		else
			fprintf(oddout,"%d\n",n);
	}

	fclose(input);
	fclose(oddout);
	fclose(evenout);
}
