#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char *str[10];
    gets(str);
    char *p = str;
    float arr[10], sum = 0;
    while (*p) {
        if (isdigit(*p)) {
            float val = strtof(p, &p);
            sum += val;
        } else {
            p++;
        }
    }
    printf("%.0lf\n", sum);
    return 0;
}
