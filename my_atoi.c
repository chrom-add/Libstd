//#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>




int my_atoi(char *str)
{
    int i = 0 ; 
    int result = 0 ; 

    while(str[i])
    {
        i = i + 1 ; 
        result = result * 10 + str[i] - '0' ;  
    }
    return(result);
}

/*
int main(void)
{
    char *str = "150" ;
    int a = 200 ;  
    //my_atoi(str);
    printf("%d",my_atoi(str + 150));

    return(0); 
}*/