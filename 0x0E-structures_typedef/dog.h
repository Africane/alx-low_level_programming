#include <stdio.h>

/**
 * struct dog - represents information about a dog
 * @name: pointer to a char array
 * @age: age of dog (floating point num)
 * @owner: pointer to char array
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int main(void)
{
	/*Create an instance of struct dog and initialize its members*/
	struct dog myDog;
	myDog.name = "Putin";
	myDog.age = 3.7;
	myDog.owner = "Arsene Lupin";

	/*Access and print the information about the dog*/
	printf("Name: %s\n", myDog.name);
	printf("Age: %.2f years\n", myDog.age);
	printf("Owner: %s\n", myDog.owner);

	return (0);
}
