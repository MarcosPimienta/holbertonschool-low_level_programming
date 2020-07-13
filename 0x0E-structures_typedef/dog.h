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
#endif