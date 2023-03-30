#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    unsigned char *i_dst = (unsigned char *)dst;
    unsigned char *i_src = (unsigned char *)src;

    for (size_t i = 0; i < n; i++) {
        i_dst[i] = i_src[i];
        if (i_src[i] == c)
            return i_dst+ (i + 1);
    }
    return NULL;
}
