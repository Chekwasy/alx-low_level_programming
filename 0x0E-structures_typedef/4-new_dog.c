#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Finds the length of a string.
 * @name: The string to be measured.
 * @age: age
 * @owner: owner
 * Return: The length of the string.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dd;
	char *nm;
	char *ow;

	dd = malloc(sizeof(dog_t));
	if (dd == NULL)
	{
		free(dd);
		return (NULL);
	}
	nm = malloc((strlen(name) + 1) * sizeof(char));
	if (nm == NULL)
	{
		free(nm);
		free(dd);
		return (NULL);
	}
	dd->age = age;
	dd->name = strcpy(nm, name);
	ow = malloc((strlen(owner) + 1) * sizeof(char));
	if (ow == NULL)
	{
		free(ow);
		free(nm);
		free(dd);
		return (NULL);
	}
	dd->owner = strcpy(ow, owner);
	return (dd);
}
