#ifndef DOGEH
#define DOGEH

/**
 * struct dog -  identifies a dogo
 * @name: dog name
 * @age:  of the dog (float)
 * @owner: f the dawg  (str)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
