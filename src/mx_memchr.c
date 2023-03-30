#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    unsigned char *s1 = (unsigned char *) s;  
    
    for(size_t i = 0; i < n; i++, s1++)
        if (*s1 == c) {
            return s1;
        }
    return NULL;
}
