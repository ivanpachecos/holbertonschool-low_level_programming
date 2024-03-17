#include <stdlib.h>
#include "dog.h"

int string_length(char *str);
char *copy_string(char *dest, char *src);

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog structure, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *new_dog_ptr;
        int name_length = 0, owner_length = 0;

        if (name != NULL && owner != NULL)
        {
                name_length = string_length(name) + 1;
                owner_length = string_length(owner) + 1;
                new_dog_ptr = malloc(sizeof(dog_t));

                if (new_dog_ptr == NULL)
                        return (NULL);

                new_dog_ptr->name = malloc(sizeof(char) * name_length);

                if (new_dog_ptr->name == NULL)
                {
                        free(new_dog_ptr);
                        return (NULL);
                }

                new_dog_ptr->owner = malloc(sizeof(char) * owner_length);

                if (new_dog_ptr->owner == NULL)
                {
                        free(new_dog_ptr->name);
                        free(new_dog_ptr);
                        return (NULL);
                }

                new_dog_ptr->name = copy_string(new_dog_ptr->name, name);
                new_dog_ptr->owner = copy_string(new_dog_ptr->owner, owner);
                new_dog_ptr->age = age;
        }

        return (new_dog_ptr);
}

/**
 * string_length - Calculates the length of a string
 * @str: String to calculate the length
 *
 * Return: Length of the string
 */
int string_length(char *str)
{
        int length = 0;

        while (*str != '\0')
        {
                length++;
                str++;
        }

        return (length);
}

/**
 * copy_string - Copies a string
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to the destination buffer
 */
char *copy_string(char *dest, char *src)
{
        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }

        *dest = '\0';

        return (dest);
}

