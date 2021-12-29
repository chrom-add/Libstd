#include <unistd.h>

char *my_Strdup(const char src)
{
  char *dest = malloc(mystrlen(src) + 1);
  if(dest == NULL) return(NULL);
  myStrcpy(dest,src);
  return(dest);
}