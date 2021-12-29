#include <unistd.h>
#include <stdlib.h>

char *myStrcpy(char *dest, const char *src, size_t len )
{
  int i ;
  i = 0 ;
  while(src[i] != '\0' && i < len)
    {
      dest[i] = src[i] ;
      i = i + 1 ;
    }
  dest[i] = '\0' ;
  return(dest);
}


/*
int main(void)
{
    char tab[20] = "hello word ca va "; 
    char tab2[20] ;

    myStrcpy(tab2,tab,10);
    printf("%s",tab2);


    return(0);
}
*/