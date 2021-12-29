#include <unistd.h>

int my_strcmp(char string1[], char string2[] )
{
    int i = 0;
    int flag = 0;
    while (flag == 0)
    {
        if (string1[i] > string2[i])
            flag = 1;
        else if (string1[i] < string2[i])
            flag = -1;
        if (string1[i] == '\0')
            break;
        i = i + 1;
    }
    return flag;
}


int my_strcmp2(char string1[], char string2[])
{
  int i ;
  i = 0 ;
  while(string1[i] && string2[i])
    {
      if(string1[i] != string2[i])
	     return (string1[i] < string2[i] ? -1 : 1) ;
      i = i + 1 ;
    }
  return(0);
}



