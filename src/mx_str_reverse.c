#include "libmx.h"

void mx_str_reverse(char *s) {
    int i;
    int j = 0;

    if (s == NULL)
        return;
    i = mx_strlen(s) - 1;
    while (i > j) {
        mx_swap_char(&s[i], &s[j]);
        j++, i--;
    }
}
