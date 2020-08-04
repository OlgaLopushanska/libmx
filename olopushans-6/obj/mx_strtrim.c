#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int mx_strlen(const char *s);
int mx_def_start(const char *str, int sz);
int mx_def_end(const char *str, int sz);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
bool mx_space(char c);

// int main() {
// 	const char *name ="    \nMy  name... \t \t  \tis  \t  Neo\t";
// 	printf("%s\n", mx_strtrim(name));
// 	return 0;
// }
char *mx_strtrim(const char *str) {
    char *u = NULL;

    if (!str)
        u = NULL;
    else {
        int sz = mx_strlen(str);
        int start = mx_def_start(str, sz);
        int end = mx_def_end(str, sz);
        
        u = mx_strnew(end - start + 1);
        for (int a = 0; a <= end - start; a++)
            u[a] = str[a + start];
    }
    return u;
}







