/*
** *****************************************************************************
** gebril.kadid
** gebril.kadid <gebril.kadid@student-station>
**
** libstd.c - 2021
**
** *****************************************************************************
*/

#include <unistd.h>

void* my_memcpy( char *destination,  void* source, size_t num)
{
	int i;
	char* d = destination;
	char* s = source;
	for (i = 0; i < num; i++) {
		d[i] = s[i];
	}
	return destination;
}

int e89_putchar(char c )
{
  return(write(1, &c, 1 ) > 0);

}

void e89_putstr(char *s)
{
  int i ;
  i = 0 ;
  while(s[i])
    {
      i = i +1 ;
      e89_putchar(s[i]);
    }

}

int e89strlen(char *s)
{
  int i ;
  i = 0 ;
  while(s[i])
    {
      i = i + 1 ;
    }
  return(i);

}

int mystrnlen(char *s, size_t len)
{
  int i ;
  i = 0 ;

}
size_t mystrnlen(const char *s, size_t maxlen)
{
  size_t i = 0;
  while(i < maxlen)
  {
    i++ ;
    s = s + 1  ;
  }
  return(i);
}

/*-----------------------------------------------------*/

int mystrCmp(char string1[], char string2[] )
{
    int i = 0;
    int flag = 0;
    while (flag == 0)
    {
        if (string1[i] > string2[i])
        {
            flag = 1;
        }
        else if (string1[i] < string2[i])
        {
            flag = -1;
        }

        if (string1[i] == '\0')
        {
            break;
        }

        i = i + 1;
    }
    return flag;
}

/*--------------------------------------------------------------*/
/*
int strCmp(char string1[], char string2[])
{
  int i ;
  i = 0 ;
  while(string1[i] && string2[i])
    {
      if(string1[i] != string2[i])
	{
	  return (string1[i] < string2[i] ? -1 : 1) ;
	}
      i = i + 1 ;
    }
  return(0);
}
*/

/*---------------------------------------------------------------*/

void myStrcpy(char *dest, const char *src)
{
  int i ;
  i = 0 ;
  while(src[i] != '\0')
    {
      dest[i] = src[i] ;
      i = i + 1 ;
    }
  dest[i] = '\0' ;
}


char *myStrdup(const char src)
{
  char *dest = malloc(mystrlen(src) + 1);
  if(dest == NULL) return(NULL);
  myStrcpy(dest,src);
  return(dest);
}

char *myStrndup(const char *str, size_t size)
{
  size_t len ;
  char *dest ;

  len = mystrnlen(str,size);
  dest = malloc(len + 1 );

  if(dest == NULL)
    return(NULL);
  mymemcpy(dest,str,len);
  return(dest);
}

int printbase10(int nbr)
{

  if(nbr != 0)
    {
      int i ;
      i = 0 ;
      if(nbr < 0)
	    {
	      e89_putchar('-');
	      nbr = nbr *-1 ;
	      printbase10(nbr);
	    }
      else
	    {
	      printbase10(nbr/10);
	      e89putchar((nbr%10)+ '0');
	    }
    }
  return(0);
}

char *mystrchr( const char *s, int c )
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


char *mystrrchr (const char *s, int c) // Cherche la derniere occurence .
{
    if (*s == 0)
    {
        return NULL;
    }

    char *ptr = NULL;
    while (*s != '\0')
    {
        if (*s == (char) c)
        {
            ptr = (char *) s;
        }
        s++;
    }

    return(ptr);
}



/*====================================================================*/
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

const char* mystrstr(const char* str1, const char* str2)
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
/*
int main(void)
{
  char *tab = "Je cherche le mot strstr pour faire ma fonction \n";

  char *tab2 = "le" ;


  printf("%s",mystrstr(tab,tab2));
  return(0);
}
*/

/*====================================================================*/
