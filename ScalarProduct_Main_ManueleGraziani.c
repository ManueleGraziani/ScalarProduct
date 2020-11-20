#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "ScalarProduct.h"


int main(int argc,char *argv[])
{
	double *Vector1ToD = NULL, *Vector2ToD = NULL;
	unsigned short int VectorSize = 0;
	double ScalarProduct = 0;

	char *TempVector = malloc(strlen(argv[1]));
	if(TempVector == NULL)
	{
		perror("Malloc Error: ");
		exit(EXIT_FAILURE);
	}

	strcpy(TempVector,argv[1]);
	VectorSize = Vector_Size_C(TempVector);
	free(TempVector);

	Vector1ToD = malloc(sizeof(double) * VectorSize);
	Vector2ToD = malloc(sizeof(double) * VectorSize);
	if(Vector1ToD == NULL || Vector2ToD == NULL)
	{
		perror("Malloc Error: ");
		exit(EXIT_FAILURE);
	} 

	printf("%d\n",VectorSize);	
	printf("%s\n",argv[1]);

	Converting_Strings_To_Double(argv[1], Vector1ToD, VectorSize);
	Converting_Strings_To_Double(argv[2], Vector2ToD, VectorSize);

	    for(int i = 0; i < VectorSize; i++)
        {
                printf("valori messi  %f ,  %f \n", Vector1ToD[i],Vector2ToD[i]);
        }


	ScalarProduct = Scalar_Product(Vector1ToD, Vector2ToD, VectorSize);	

	printf("\n Prodotto scalare = %f",ScalarProduct);

	return round(ScalarProduct);
}
