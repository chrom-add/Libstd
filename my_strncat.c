#include <unistd.h>

int my_strlen(char *s)
{
  int i ;
  i = 0 ;
  while(s[i])
    {
      i = i + 1 ;
    }
  return(i);
}

// Passage par index . 
char *my_strncat1(char *dest, const char *src, size_t len)
{
  size_t i ;
  size_t j ;

  i = 0 ;
  j = 0 ;

  while(dest[i])
    {
      i = i + 1 ;
    }
    while(src[j] != '\0' && j < len)
    {
       dest[i+j] = src[j] ; 
       //printf("%s",dest[i+j]);
        j++;
    }
  dest[j+i] = '\0';
  return(dest);
}




// Passage par adresse .
char *my_strncat2(char* destination, const char* source, size_t num)
{
    int i = 0 ; 
    char* ptr ; 
    ptr = destination + my_strlen(destination);
    while (*source != '\0' && i < num ) { 
        *ptr++ = *source++;
        i++ ;
    }  
    *ptr = '\0';
    return destination;
}


/*
int main(void)
{

  char tab1[20] = "test2" ;
  char tab2[20] = "hello word " ;
  size_t len =  2  ;

  my_strncat2(tab2,tab1,len);
  printf("%s\n",tab2);

  return(0);
}
*/

