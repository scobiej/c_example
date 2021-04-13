#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *data;

	data = calloc(10, sizeof(int));

	if (data != NULL) {

		for (int i=0; i<10; i++) {
			*(data + i) = 60 + i;
			printf("data = %d\n", *(data+i));
			

		}
		
		
		free(data);
	} else {
		printf("BIG TROUBLE\n");
	}

	return 0;
}

