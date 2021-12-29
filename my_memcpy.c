#include <unistd.h>

void* my_memcpy( char *destination,  const void* source, size_t num)
{
	int i;
	char* d = destination;
	char* s = source;
	for (i = 0; i < num; i++) {
		d[i] = s[i];
	}
	return destination;
}