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
	int i;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	if (name == NULL)
		ndog->name = NULL;
	else
	{
		ndog->name = malloc(64);
		if (ndog->name != NULL)
			for (i = 0; (ndog->name[i] = name[i]) != '\0'; ++i)
				;
		else
		{
			free(ndog);
			return (NULL);
		}
	}
	ndog->age = age;
	if (owner == NULL)
		ndog->owner = NULL;
	else
	{
		ndog->owner = malloc(64);
		if (ndog->owner != NULL)
			for (i = 0; (ndog->owner[i] = owner[i]) != '\0'; ++i)
				;
		else
		{
			free(ndog->name);
			free(ndog);
			return (NULL);
		}
	}
	return (ndog);
}
