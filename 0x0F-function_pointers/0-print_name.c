/**
 *print_name - Prints a name
 *@name: Name of the person
 *@f: Function Pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
