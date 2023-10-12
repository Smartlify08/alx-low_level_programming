#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - structure of a dog
 *
 * creates a name for the dog, an age and an owner
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* __DOG_H__ */
