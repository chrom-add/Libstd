#include <unistd.h>


size_t my_strlen(char *s)
{
  size_t i ;
  i = 0 ;
  while(s[i])
    {
      i = i + 1 ;
    }
  return(i);

}

