#include <unistd.h>

int my_putchar(char c )
{
  return(write(1, &c, 1 ) > 0);

}

void my_putstr(char *s)
{
  int i ;
  i = 0 ;
  while(s[i])
    {
      i = i +1 ;
      my_putchar(s[i]);
    }

}