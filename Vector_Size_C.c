#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"SPHeaderFile.h"


unsigned short int Vector_Size_C(char *Vector)
{
	unsigned short int VectorSize = 0;

	if(strtok(Vector,",") != NULL)
		VectorSize++;
	else{
		printf("Errore, Nessun dato rilevato in input!!");
		exit(EXIT_FAILURE);
	}

	while(strtok(NULL,",") != NULL)
		VectorSize++;

	return VectorSize;
}
