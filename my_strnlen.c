#include <unistd.h>

size_t my_strnlen(const char *s, size_t maxlen)
{
  size_t i = 0;
  while(*s)
  {
    while(i < maxlen)
      i++ ;
    s = s + 1  ;
  }
  return(i);
}

/*
int main(void)
{
  char tab[20] = "Hello word"; 
  size_t len = 7 ; 

  printf("%d",my_strnlen(tab,len));


  return(0);
}
*/