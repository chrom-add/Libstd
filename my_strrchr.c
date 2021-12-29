#include <unistd.h>

char *my_strrchr (const char *s, int c)
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
