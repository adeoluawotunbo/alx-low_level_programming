#ifndef _DOG_
#define _DOG_

/**
 * struct dog - My_dog Information
 * @name: name of the dog; char* type
 * @age: age of the dog; float type
 * @owner: owner of the dog; char* type
 *
 * Description: My dog informations
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
char *_strdup(char *str);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
