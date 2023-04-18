#include "dog.h"
#include <stdio.h>

/**
 * void print_dog - function that prints all memeber info of  struct dog
 * @d: variable of struct dog
 */
void print_dog(struct dog *d)
{
	if(d == NULL)
		return;

	(d->name == NULL) ? printf("Name: (nil\n)")
		: printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	(d->owner ==NULL) ? printf("Owner: (nil\n)")
		: printf("Owner: %s\n", d->owner);
}
