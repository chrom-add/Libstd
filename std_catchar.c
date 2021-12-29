#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

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

bool std_catchar(char *str , size_t *i , size_t max, char c )
{

    if(*i < max )
    {
        str[*i] = c ; 
        *i = *i + 1 ; 
        return(true);
    }
    return(false);
}


/*
int main(void){

    char str[20] = ("Hellz word\n"); 
    size_t i = 4;  

    std_catchar(str,&i,my_strlen(str), 'o');
    printf("%s",str);


    return(0);
}
*/