#include "libmx.h"

char *mx_strdup(const char *s1) {
    char *a = mx_strnew(mx_strlen(s1));
    
    mx_strcpy(a, s1);
    return a;
}
