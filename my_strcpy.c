#include <unistd.h>
void myStrcpy(char *dest, const char *src)
{
  int i ;
  i = 0 ;
  while(src[i] != '\0')
    {
      dest[i] = src[i] ;
      i = i + 1 ;
    }
  dest[i] = '\0' ;
}


