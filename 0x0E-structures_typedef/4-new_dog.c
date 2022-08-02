#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - function that creat new dog
 * @age: dog age
 * @name: dog name
 * @owner: ...
 *
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rambo_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		rambo_dog = malloc(sizeof(dog_t));

		if (rambo_dog == NULL)
			return (NULL);
		rambo_dog->name = malloc(sizeof(char) * name_l);

		if (rambo_dog->name == NULL)
		{
			free(rambo_dog);
			return (NULL);
		}
		rambo_dog->owner = malloc(sizeof(char) * own_l);

		if (rambo_dog->owner == NULL)
		{
			free(rambo_dog->name);
			free(rambo_dog);
			return (NULL);
		}

		rambo_dog->name = _strcpy(rambo_dog->name, name);
		rambo_dog->owner = _strcpy(rambo_dog->owner, owner);
		rambo_dog->age = age;
	}

	return (rambo_dog);
}

/**
 * _strlen - string lenght
 * @s: count sting
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
/**
 * _strcpy - copy
 * @dest: destination
 * @src: source
 *
 * Return: pinter to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
