#include <stdio.h>
#include "dog.h"

/**
  * print_dog - print the characteristics of a dog
  *
  * @d: structure pointer
  */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	printf("Age: ");
	if (d->age == -1)
		printf("(nil)\n");
	else
		printf("%.6f\n", d->age);

	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
