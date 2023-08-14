/**
 * print_dog - prints the dog name, age, owenr
 * @d: address of the dog's struct dog varialble
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n
			Age: %0.6f\n
			Owner: %s\n"
			, (*d).name
			, (*d).age
			, (*d).owner);
}
