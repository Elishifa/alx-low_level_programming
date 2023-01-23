#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog name pointer
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nd = 0, od = 0, m = 0;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for ( ; name[nd]; nd++)
		;
	nd++;
	dog->name = malloc(nd * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for ( ; m < nd; m++)
		dog->name[m] = name[m];
	dog->age = age;
	for ( ; owner[od]; od++)
		;
	od++;
	dog->owner = malloc(od * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for ( ; m < od; m++)
		dog->owner[m] = owner[m];

	return (dog);
}
