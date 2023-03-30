#include "libmx.h"

char *mx_strjoin(char const *s1, char const *s2) {
    char *new;
    
    if(s1 == NULL && s2 == NULL)
        return NULL;
    else if(s1 == NULL && s2 != 0)
        return mx_strdup(s2);
    else if(s1 != NULL && s2 == 0)
        return mx_strdup(s1);
    else {
        new = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
        new = mx_strcat(mx_strcpy(new, s1), s2);
        return new;
    }
}
