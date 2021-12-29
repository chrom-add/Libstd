#include <unistd.h>

void* my_memcpy( char *destination,  void* source, size_t num)
{
	int i;
	char* d = destination;
	char* s = source;
	for (i = 0; i < num; i++) {
		d[i] = s[i];
	}
	return destination;
}
char *my_Strndup(const char *str, size_t size)
{
  size_t len ;
  char *dest ;

  len = mystrnlen(str,size);
  dest = malloc(len + 1 );

  if(dest == NULL)
    return(NULL);
  mymemcpy(dest,str,len);
  return(dest);
}