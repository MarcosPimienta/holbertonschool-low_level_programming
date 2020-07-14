#ifndef DOG
#define DOG
/**
* struct dog - dog id
* @owner: First member
* @name: Dog name  member
* @age: Float member
*
* Description: Dog ID system
*/
typedef struct dog
{
	char *owner;
	char *name;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif
