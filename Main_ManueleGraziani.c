#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "SPHeaderFile.h"


int main(int argc,char *argv[])
{
	double *Vector1ToD = NULL, *Vector2ToD = NULL, ScalarProduct = 0;
	unsigned short int VectorSize = 0;


	if(argc != 3){
		printf("Syntax ERROR: la sintassi è %s [n,n,n] [n,n,n]\n",argv[0]);
		exit(EXIT_FAILURE);
	}

	/*
	 * Viene allocato a tempo di Runtime un array temporaneo delle stesse dimensioni di argv[1]
	 */

	char *TempVector = malloc(strlen(argv[1])+1);
	if(TempVector == NULL)
	{
		perror("Malloc Error");
		exit(EXIT_FAILURE);
	}

	strcpy(TempVector,argv[1]);//Viene copiato il contenuto di argv[1] in TempVector, questo serve per evitare che le successive operazioni compromettono l’integrità di argv[1]
	VectorSize = Vector_Size_C(TempVector); // Viene calcolato il numero di argomenti passati in input
	free(TempVector);


	Vector1ToD = malloc(sizeof(double) * VectorSize);
	Vector2ToD = malloc(sizeof(double) * VectorSize);
	if(Vector1ToD == NULL || Vector2ToD == NULL)
	{
		perror("Malloc Error");
		exit(EXIT_FAILURE);
	} 

	String_To_Double_Vector(argv[1], Vector1ToD, VectorSize);
	String_To_Double_Vector(argv[2], Vector2ToD, VectorSize);
	ScalarProduct = Scalar_Product(Vector1ToD, Vector2ToD, VectorSize);	

	// De allocazioni delle variabili precedentemente allocate con malloc
	free(Vector1ToD);
	free(Vector2ToD);

	printf("= %f\n",ScalarProduct);

	return round(ScalarProduct);
}
