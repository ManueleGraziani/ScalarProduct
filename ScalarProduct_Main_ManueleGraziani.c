#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ScalarProduct.h"


int main(int argc,char *argv[])
{
	unsigned short int VectorSize = 0;
	char *TempVector;

	TempVector = malloc(strlen(argv[1]));
	if(TempVector == NULL)
	{
		perror("Malloc Error: ");
		exit(EXIT_FAILURE);
	}

	strcpy(TempVector,argv[1]);


	VectorSize = Vector_Size_C(&TempVector);
	free(TempVector);

	printf("%d\n",VectorSize);	
	printf("%s\n",argv[1]);

	Converting_Strings_To_Double(&argv[1], &argv[2], &VectorSize);


	return 0;
}
