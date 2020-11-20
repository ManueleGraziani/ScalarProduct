#include <stdio.h>

double Scalar_Product(double *Vector1, double *Vector2, const unsigned short int VectorSize)
{	
	double ScalarProduct = 0;
	unsigned int i;

	for(i = 0; i < VectorSize; i++)
	{
		ScalarProduct = ScalarProduct + (Vector1[i] * Vector2[i]);
		printf("prodotto tra %f * %f = %f \n", Vector1[i],Vector2[i],ScalarProduct);
	}

	return ScalarProduct;

}
