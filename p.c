#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *data;

	data = calloc(10, sizeof(int));

	if (data != NULL) {

		for (int i=0; i<10; i++) {

		}
		
		*data = 60;
		printf("data = %d\n", *data);

		*(data+1) = 61;

		printf("data = %d\n", *(data+1));
		printf("data = %d\n", *(data+2012));

		*(data+2) = 62;

		free(data);
	} else {
		printf("BIG TROUBLE\n");
	}

	return 0;
}

