#include <unistd.h>


char *my_strchr( const char *s, int c )
{
    char *ptr ;
  while(*s != '\0')
  {
      if(*s == c )
      {
        ptr = (char*) s ;
        return(ptr);
      }
      s++ ;
  }
  return(NULL);
}
