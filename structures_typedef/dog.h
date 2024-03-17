#ifndef DOG_H
#define DOG_H

/**
  * struct dog - dog defined
  *
  * @age: number
  * @name: char
  * @owner: char
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
