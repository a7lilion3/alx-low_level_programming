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
	if (d->name == NULL || d->name[0] < 10)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	if (d->age == d->age)
		printf("(nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL || d->owner[0] < 10)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
