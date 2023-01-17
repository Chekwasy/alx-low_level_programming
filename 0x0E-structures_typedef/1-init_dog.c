#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - structures
 * @d: - dog struct
 * @name: - name of user
 * @age: - age of user
 * @owner: - owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
