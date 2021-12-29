#include <unistd.h>
#include <stdio.h>
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
char *my_strcat(char* dest, const char *src)
{
  size_t i ;
  size_t j ;

  i = 0 ;
  j = 0 ;

  while(dest[i])
    {
      i = i + 1 ;
    }
  while(src[j])
    {
      dest[j+i] = src[j] ;
      j = j + 1  ;
    }
  dest[i+j] = '\0' ;
  return(dest);
}

//Passage par l'adresse .
char *my_strcat2(char *dest, const char *src)
{
    char *ptr ; 
    ptr = dest + my_strlen(dest);
    while(*src != '\0')
        *ptr++ = *src++ ;
    ptr = '\0' ; 
    return(dest) ; 
}

/*
int main(void)
{
  char tab1[40] = "test1";
  char tab2[40] = "test2";

  my_strcat2(tab1,tab2);
  printf("%s\n",tab1);


}
*/














