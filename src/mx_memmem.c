#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    unsigned char *i_big = (unsigned char *)big;
    unsigned char *i_lit = (unsigned char *)little;
    
    if (big_len >= little_len && (little_len && big_len) != 0)
        for ( ; *i_big; i_big++)
            if (*i_big == *i_lit
                && !mx_memcmp(i_big, i_lit, little_len))
                    return i_big;
    return NULL;
}
