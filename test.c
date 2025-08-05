#include "libft.h"
int main ()  
{  
    const char str[] = "Program using strchr";  
    const char ch = 'm';  
    char *ptr;   

    printf (" Original string is: %s \n", str);
    
    ptr = strchr( str, ch);  
    printf (" The first occurrence of the '%c' in '%s' string  is: '%s' ", ch, str, ptr);  
    return 0;
}