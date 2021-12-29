#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>


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
      my_putchar(s[i]);
      i = i + 1 ;
    }

}

int my_cat(char *get_argv)
{
    int fd ; 
    int ret ; 

    char *buff = malloc(500 * sizeof(char));

    fd = open(get_argv , O_RDONLY);
    if(fd == -1 )
    {
        my_putstr("Erreur d'ouverture\n");
        return(1);
    }
    else{
        while((ret = read(fd,buff,sizeof(buff))))
        {
            my_putstr(buff);
            buff[ret] = '\0';
        }
    }
    close(fd);
    free(buff);
    return(0);
}


int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        my_putstr("Argument invalid\n");
    }
    my_cat(argv[1]);

    return(0);
}