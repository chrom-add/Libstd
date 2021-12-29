#include <unistd.h>
#include <stdio.h>

int compare(const char *X, const char *Y)
{
    while (*X && *Y)
    {
        if (*X != *Y) {
            return 0;
        }
 
        X++;
        Y++;
    }
 
    return (1);
}

const char* my_strstr(const char* str1, const char* str2)
{
    while (*str1 != '\0')
    {
        if (compare(str1, str2)== 1) {
            return str1;
        }
        str1++;
    }
 
    return NULL;
}

int main(void)
{
  char *tab = "Je cherche le mot strstr pour faire ma fonction \n";

  char *tab2 = "s" ; 


  printf("%s",my_strstr(tab,tab2));
  return(0);
}
