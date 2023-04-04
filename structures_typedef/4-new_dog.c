#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - write a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *x;
char *newname, *newowner;
int i, j, k;

x = malloc(sizeof(dog_t));
	if (!x)
		return (NULL);

for (i = 0; name[i]; i++)
	;
for (j = 0; owner[j]; j++)
	;
i++;
j++;
newname = malloc(i);
	if (!newname)
	{
		free(x);
		return (NULL);
	}
newowner = malloc(j);
	if (!newowner)
	{
		free(newname);
		free(x);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		newname[k] = name[k];
	for (k = 0; k < j; k++)
		newowner[k] = owner[k];

	x->name = newname;
	x->owner = newowner;
	x->age = age;

	return (x);
}
