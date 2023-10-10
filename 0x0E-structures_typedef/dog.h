#ifndef DOG_H
#define DOG_H
/**
 *struct dog - creating a stuct dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of doc
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - new name fot struct dog
 */
typedef struct dog dog_t;
#endif
