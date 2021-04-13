/**
 * @file p.c
 *
 * @brief Some sort of pointer example
 *
 * @author Jon Scobie <jon.scobie@callsign.com>
 *
 * @copyright (c) 2021 Callsign Ltd.  All rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief  Set some integer value in memory
 *
 * @param  *data: Pointer to a data integer 
 * @param  value: What we want to set value of data to
 * @retval The value which has been set
 */
int set_value(int *data, int value)
{
	*data = value;

	return *data;
}


void initialise_array(int somedata[]) {
	for (int i=0; i<10; i++) {
		somedata[i] = i;
	}
}


void initialise_data(int *somedata) {
	for (int i=0; i<10; i++) {
		*(somedata + i) = i;
	}
}

void print_data(int *somedata) {
	for (int i=0; i<10; i++) {
		printf("data = %d\n", somedata[i]);
	}
}


int main()
{
	int *data = NULL;
	int someotherdata[10] = {0};

	// We allocate enough memory to store our list of integers
	data = calloc(10, sizeof(int));

	if (data != NULL) {

		initialise_data(data);

		print_data(data);

		free(data);
	} else {
		printf("BIG TROUBLE\n");
	}

	int score = 10;
	int result = set_value(&score, 20);

	printf("Result = %d	Score = %d\n", result, score);

	initialise_array(someotherdata);

	set_value(&someotherdata[0], 55);

	for (int i=0; i<10; i++) {
		printf("someotherdata = %d\n", someotherdata[i]);
	}

	return EXIT_SUCCESS;
}

