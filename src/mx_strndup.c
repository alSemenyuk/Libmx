#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *buf = NULL;
    size_t size;

    if (s1 == NULL && n == 0)
        return mx_strnew(0);
    size = (unsigned int) mx_strlen(s1);    
    if (size < n)
        buf = mx_strdup(s1);
    else {
        buf = mx_strnew(n);
        buf = mx_strncpy(buf, s1, n);
    }
    return buf;
}

