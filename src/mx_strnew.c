#include "libmx.h"

char *mx_strnew(const int size) {
    char *a;

    if (size < 0)
        return NULL;
    a = malloc(size + 1);
    if (NULL == a)
        return NULL;
    else {
        for(int i = 0; i <= size; i++)
        a[i] = '\0';
    }
    return a;
}
