#ifndef STRUCT
#define STRUCT
/**
 * struct dog - estructura
 * @name: puntero a nombre
 * @age: edad
 * @owner: usuario
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
