#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: struct dog *
 * Return: void
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

	if (d->age == 0)
		printf("(nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
