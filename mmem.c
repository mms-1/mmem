#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vLine(int size)
{
    int i;
    printf("##");
	for ( i = 0; i < size; ++i )
	{
		printf("=");
	}
	printf("##\n");
}

int main()
{
	#define size 10
	int i, j;
	int mx[size][size];
	
	srand(time(NULL));
	printf("[i] matrix: \n");

	vLine(size);
	// BODY
	for ( i = 0; i < size; ++i )
	{
		printf("||");
		for ( j = 0; j < size; ++j )
		{
			mx[i][j] = rand() % 2;
			if ( mx[i][j] == 1)
				printf("*");
			else
			    printf(" ");
		}
		printf("||\n");
	}
	// ~ BODY
	vLine(size);

	return 0;
}
