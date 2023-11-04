#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: char *
 * @age: float
 * @owner: char *
 * Return: dog_t *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i, n;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	if (name == NULL)
		ndog->name = NULL;
	else
	{
		for (i = 0; name[i] != '\0'; ++i)
			;
		n = i;
		ndog->name = malloc(n);
		if (ndog->name != NULL)
			for (i = 0; (ndog->name[i] = name[i]) != '\0'; ++i)
				;
	}

	ndog->age = age;

	if (owner == NULL)
		ndog->owner = NULL;
	else
	{
		for (i = 0; name[i] != '\0'; ++i)
			;
		n = i;
		ndog->owner = malloc(n);
		if (ndog->owner != NULL)
			for (i = 0; (ndog->owner[i] = owner[i]) != '\0'; ++i)
				;
	}

	return (ndog);
}
