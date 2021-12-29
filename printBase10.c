#include <unistd.h>
int my_putchar(char c )
{
  return(write(1, &c, 1 ) > 0);

}

int printbase10(int nbr)
{

  if(nbr != 0)
    {
      int i ;
      i = 0 ;
      if(nbr < 0)
	    {
	      my_putchar('-');
	      nbr = nbr *-1 ;
	      printbase10(nbr);
	    }
      else
	    {
	      printbase10(nbr/10);
	      my_putchar((nbr%10)+ '0');
	    }
    }
  return(0);
}
