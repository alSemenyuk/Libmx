#include "libmx.h"

char *mx_strtrim(const char *str) {
    int len;
    char *new;

    if ( NULL == str)
        return NULL;
    for (; mx_isspace(*str); str++)
        len = mx_strlen(str);
    for (int i = len; mx_isspace(str[i]); i--)
        len--;
    if (len < 0)
        return mx_strnew(0);
    new = mx_strnew(len);
    new = mx_strncpy(new, str, len);
    return new;
}
