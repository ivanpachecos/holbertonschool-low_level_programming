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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
