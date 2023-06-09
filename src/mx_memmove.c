#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *buff = malloc(len);

    mx_memcpy(buff, src, len);
    mx_memcpy(dst, buff, len);
    free (buff);
    return dst;
}
