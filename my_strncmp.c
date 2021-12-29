#include <unistd.h>
//#include <stdio.h>
#include <stdlib.h>


//int strncmp( const char * first, const char * second, size_t length )



int my_strncmp(char string1[], char string2[], size_t len )
{
    int i = 0;
    int flag = 0;
    while (flag == 0 && i < len )
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

/*
int main(void)
{
    char tab[15] = "hella"; 
    char tab2[15] = "hellz" ; 

    printf("%d",my_strncmp(tab,tab2,5));


    return(0);
}
*/