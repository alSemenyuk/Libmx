#include "libmx.h"

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int last = size - 1 ;
    int first = 0;
    int mid;
    while (first <= last) {
        ++*count;
        mid = (first + last) / 2;
        if(mx_strcmp(arr[mid], s) == 0)
            return mid;
        if (mx_strcmp(arr[mid], s) > 0)
            last = mid - 1;
        else 
            first = mid + 1; 
    }
    *count = 0;
    return -1;
}
