#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structures
 * @name: - name of user
 * @age: - age of user
 * @owner: - owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
