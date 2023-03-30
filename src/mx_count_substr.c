#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    
    if ((str == NULL) || (sub == NULL))
        return -1;
    if (mx_strlen(sub) == 0 || mx_strlen(str) == 0)
        return 0;
    while((str = mx_strstr(str, sub)) != 0) {
        str++;
        count++;
    }
    return count;
}
