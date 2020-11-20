#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"ScalarProduct.h"

void  Converting_Strings_To_Double(char **Vector1, char **Vector2, const unsigned short int *VectorSize)
{	
	char *v = *Vector1, *endPtr = NULL;
	int *Vector1ToInt = malloc(*VectorSize);
	int *Vector2ToInt = malloc(*VectorSize);


	if(Vector1ToInt == NULL || Vector2ToInt == NULL)
	{
		perror("Malloc Error: ");
		exit(EXIT_FAILURE);
	}


	for(int i = 0; i < *VectorSize; i++)
	{
		Vector1ToInt[i]  = strtod(v, &endPtr);
		printf("valore :%d\n",Vector1ToInt[i]);
		//		printf("%c",*endPtr);

		while(*endPtr == ' ')
			endPtr++;
		v = endPtr + 1;


	}


}
