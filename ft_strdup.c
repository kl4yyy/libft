#include <stdio.h>
#include <stdlib.h>
char *strdup(const char *s)
{
    size_t i = 0;
    char *dub;
    //replace with strlen
    while(s[i] != '\0') i++;

    dub = malloc (i+1);
    if(!dub)return NULL;
    i = 0;
    while(s[i] != '\0'){
        dub[i] = s[i];
        i++;
    }
    dub[i]='\0';
    return (dub);
}

int main(void){
    char *s = "hello";
    char *fun = strdup(s);
    printf("%s\n",fun);
    free(fun);
}
