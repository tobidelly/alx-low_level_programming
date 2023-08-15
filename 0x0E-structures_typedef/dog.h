#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Defines a structure for representing dog information.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 */

struct dog
{
	char *name; /* The name of the dog */
	float age; /* The age of the dog */
	char *owner; /* The owner of the dog */
};

/**
 * dog_t - typedef alias for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);


#endif /* DOG_H */
