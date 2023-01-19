#ifndef FUNCTION_POINTER
#define FUNCTION_POINTER

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /*FUNCTION_POINTER*/
