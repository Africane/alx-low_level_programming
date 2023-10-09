#include <stdio.h>

/*Define the struct dog type*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initializes a strcut dog variable with given values
 * @d: pointer to struct dog var to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

int main(void)
{
	struct dog myDog;

	/*Initialize myDog using the init_dog function*/
	init_dog(&myDog, "Buddy", 3.5, "John Doe");

	/*Access and print the information about the dog*/
	printf("Name: %s\n", myDog.name);
	printf("Age: %.2f years\n", myDog.age);
	printf("Owner: %s\n", myDog.owner);

	return (0);
}
