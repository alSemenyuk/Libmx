#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char *s1 = (unsigned char *)s;
    
    if (s) { 
        s1 += mx_strlen(s);
        for(size_t i = 0; i < n; i++)
            if( *s1-- == c)
                return ++s1;
    }
        return NULL;
}
