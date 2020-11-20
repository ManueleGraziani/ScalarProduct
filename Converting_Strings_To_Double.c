#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ScalarProduct.h"



void Converting_Strings_To_Double(char *Vector, double *VectorToD, const unsigned short int VectorSize)
{	
	char *endPtr = NULL;
	int i = 0;

	if(*Vector == '{')
		Vector++;

	for(i = 0; i < VectorSize; i++)
	{	
		VectorToD[i] = strtod(Vector, &endPtr);
		printf("valore :%f\n",VectorToD[i]);
		//		printf("%c",*endPtr);

		while(*endPtr == ' ')
			endPtr++;
		Vector = endPtr + 1;
	}

}
