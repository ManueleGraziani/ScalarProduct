#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "SPHeaderFile.h"

void String_To_Double_Vector(char *Vector, double *VectorToD, const unsigned short int VectorSize)
{	
	char *endPtr = NULL;
	unsigned short int i = 0;

	if(*Vector == '{')
		Vector++;

	for(i = 0; i < VectorSize; i++)
	{	
		VectorToD[i] = strtod(Vector, &endPtr);
		// Aumenta il valore del puntatore finché è uguale al carattere ‘ ’
		while(*endPtr == ' ')
			endPtr++;
		// viene sommato 1 Byte per superare il carattere ','
		Vector = endPtr + 1;
	}

}
