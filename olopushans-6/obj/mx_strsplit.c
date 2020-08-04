#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int mx_count_words(const char *str, char c);
char **mx_strsplit(const char *s, char c);
char *mx_strnew(const int size);
static char **strsplit_dop(const char *s, char c, int count, char **arr);

static bool count_border(char *s, char c, char **start, char **end);
// int main() {
// char *s = " Knock, knock, Neo. ";
// char c = ' ';
// char **arr= mx_strsplit(s, c);
// for (int a = 0; arr[a] != NULL; a++)
// printf("%s\n ", arr[a]);
// return 0;
// }

// char **mx_strsplit(const char *s, char c) {
// int count = mx_count_words(s, c);
// 	char **arr = malloc(count);

// 	if (!s)
// 		return NULL;
// 	arr = mx_strsplit_dop(s, c, count, arr);
// 	arr[count] = NULL;
// 	return arr;
// }
// char **mx_strsplit_dop(const char *s, char c,
// int count, char **arr) {
// 		char *r = mx_strnew(1000);
// 		int a = 0;

// 		while (a < count) {
// 			int t = 0;
// 			for (int b = 0; s[b] != '\0'; b++) {
// 				if (s[b] != c ) {
// 					r[t] = s[b];
// 					t++;
// 				}
// 				if ((s[b] == c || (s[b] != c && s[b+1] == '\0')) && t > 0 ) {
// 					arr[a] = mx_strnew(t);
// 					for (int d = 0; d < t; d++)
// 						arr[a][d] = r[d];
// 					t = 0;
// 					a++;
// 				}
// 			}
// 		}
// 		return arr;
// 	}
	


char **mx_strsplit(const char *s, char c) {
    char **arr = NULL;
    int count = 0;

    if (!s)
        return NULL;
    count = mx_count_words(s, c);
    arr = (char **) malloc((count+ 1) * sizeof(char *) );

    arr = strsplit_dop(s, c, count, arr);
    arr[count] = NULL;
    return arr;
}


static char **strsplit_dop(const char *s, char c, int count, char **arr) {
    char *str= (char *)s;
    char *start = NULL;
    char *end = NULL;

    for (int a = 0; a < count && count_border(str, c,&start, &end); a++) {
        int d = 0;

        arr[a] = mx_strnew((size_t)(end - start + 1));
        for (str = start; str != end; str++) {
            arr[a][d] = *str;
            d++;
        }
        str = end + 1;
    }
    return arr;
}

static bool count_border(char *s, char c, char **start, char **end) {
    for (*start = s; **start == c; (*start)++)
        if (**start =='\0')
            return false;
    for (*end = *start; **end != c && **end != '\0'; (*end)++)
    ;
    return true;
}


	
