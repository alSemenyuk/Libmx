#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    unsigned char *i_s1 = (unsigned char *)s1;
    unsigned char *i_s2 = (unsigned char *)s2;
    
    for(size_t i = 0; i < n; i++) {
        if (i_s1[i] != i_s2[i])
            return i_s1[i] - i_s2[i];
    }
    return 0;
}
