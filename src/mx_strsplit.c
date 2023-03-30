#include "libmx.h"

static void mx_str_in_array(char const *s, char c, char **new_arr) {
    int len = 0;
    int k = 0;
    int j = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != c && len == 0)
            k = i;
        if (s[i] != c && s[i] != 0)
            len++;
        if (len > 0 && (s[i + 1] == c || s[i + 1] == 0)) {
            new_arr[j] = mx_strnew(len);
            new_arr[j] = mx_strncpy(new_arr[j], &(s[k]), len);
            len = 0;
            j++;
        }
    }
    new_arr[j] = NULL;
}

char **mx_strsplit(const char *s, char c) {
    char **new_arr = NULL;

    if (!s)
        return NULL;
    new_arr =(char **)malloc(sizeof(char *) * (mx_count_words(s, c) + 1));
    mx_str_in_array(s, c, new_arr);
    return new_arr;
}
