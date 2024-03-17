#include <stdlib.h>
#include "dog.h"

int srt_len(char *s);
char *fun_copy_str(char *dest, char *src);

/**
  * new_dog - ...
  * @name: ...
  * @age: ...
  * @owner: ...
  *
  * Return: ...
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_nw;
	int name_ = 0, owner_ = 0;

	if (name != NULL && owner != NULL)
	{
		name_ = srt_len(name) + 1;
		owner_ = srt_len(owner) + 1;
		dog_nw = malloc(sizeof(dog_t));

		if (dog_nw == NULL)
			return (NULL);

		dog_nw->name = malloc(sizeof(char) * name_);

		if (dog_nw->name == NULL)
		{
			free(dog_nw);
			return (NULL);
		}

		dog_nw->owner = malloc(sizeof(char) * owner_);

		if (dog_nw->owner == NULL)
		{
			free(dog_nw->name);
			free(dog_nw);
			return (NULL);
		}

		dog_nw->name = fun_copy_str(dog_nw->name, name);
		dog_nw->owner = fun_copy_str(dog_nw->owner, owner);
		dog_nw->age = age;
	}

	return (dog_nw);
}

/**
  * srt_len - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int srt_len(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
  * fun_copy_str - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *fun_copy_str(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
