#include <stdio.h>
#include <stdlib.h>
char *mx_replace_substr(const char *str, const char *sub, const char *replace);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
static char *replace_sub(const char *str, const char *sub, 
		const char *replace, int *count);

static int compare_string(const char *str, 
		const char *sub, int l2, int c);
// int main() {
// 	const char *str = "Ururu turu";
// 	const char *sub = "ru";
// 	const char *replace = "taru";
//     char *u=mx_replace_substr(str, sub, replace);
// 	printf("%s\n", u);
// 	system("leaks -q n");
// 	return 0;
// }
// char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
// 	char *u = NULL;
// 	if (sub == NULL || str == NULL || replace == NULL)
// 		u = NULL;
// 	else {
// 		int count = 0;
// 		int priznak = 0;
// 		int size = 0;
// 		int b = 0;
// 		for (int a = 0; str[a] != '\0'; a++) {
// 			if (str[a] == sub[b]) {
// 				for (; sub[b] != '\0'; b++)
// 					if (str[a + b] != sub[b])
// 						priznak = 1;
// 				if (priznak == 0)
// 					count++;
// 				priznak = 0;
// 				b = 0;
// 			}
// 		}
// 		printf("count %d\n", count);
// 		for (; str[size] != '\0'; size++)
// 			;
// 		int leng1 = 0;
// 		for (; sub[leng1] != '\0'; leng1++)
// 			;
// 		int leng2 = 0;
// 		for (; replace[leng2] != '\0'; leng2++)
// 			;
// 		size = size - count * leng1 + count * leng2;
// 		u = (char*)malloc(size + 1);
// 		printf("size %d\n", size);
// 		int c = 0;
// 		for (int a = 0; str[a] != '\0'; a++) {
// 			b = 0;
// 			if (str[a] != sub[b]) {
// 				u[c] = str[a];
// 				c++;
// 			}
// 			if (str[a] == sub[b]) {
// 				//int t=0;
// 				for (; b<leng1; b++)
// 					if (str[a + b] != sub[b])
// 						priznak = 1;
// 				if (priznak == 1) {
// 					u[c] = str[a];
// 					b = leng1 - 1;
// 					c++;
// 					a++;
// 				}

// 				if (priznak == 0) {
// 					for (int r = 0; r<leng2; r++) {
// 						u[c] = replace[r];
// 						c++;
// 					}
// 						a = a + leng1-1;
// 				}
// 				priznak = 0;
// 				b = 0;
// 			}
// 		}
// 		u[size]='\0';
// 	}
// 	return u;
// }
// char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
// 	int l1 = mx_strlen(str);
// 	int l2 = mx_strlen(sub);
// 	int l3 = mx_strlen(replace);
// 	char *u = (char*)malloc(l1*l3);
// 	int count = -1;
// 	int r = 0;
// 	if (!sub || !str || !replace)
// 		return NULL;
// 	for (int c = 0; c<l1; c++) {
// 		count++;
// 		u[count] = str[c];
// 		for (r = 0; r<l2; r++) 
// 			if (str[c + r] != sub[r])
// 				r = l2 + 5;
// 		if (r == l2) {
// 			for (r = 0; r<l3; r++)
// 				u[count + r] = replace[r];
// 			count = count + l3 - 1;
// 			c = c + l2 - 1;
// 		}
// 	}
// 	char *res = mx_strnew(count+1);
// 	for (int a = 0; a <= count; a++)
// 		res[a] = u[a];
// 	free(u);
// 	return res;
// }
static char *replace_sub(const char *str, const char *sub,
const char *replace, int *count);

static int compare_string(const char *str,
const char *sub, int l2, int c);

char *mx_replace_substr(const char *str, const char *sub,
const char *replace) {
    int count = -1;
    char *u = NULL;
    char *res = NULL;

    if (str == NULL || sub == NULL || replace == NULL)
        return NULL;
    if (mx_strlen(str) == 0 || mx_strlen(sub) == 0 || mx_strlen(replace) == 0)
        return (char *)str;
    u = replace_sub(str, sub, replace, &count);
    res = mx_strnew(count);
    for (int a = 0; a <= count; a++)
        res[a] = u[a];
    free(u);
    return res;
}


static int compare_string(const char *str,
const char *sub, int l2, int c) {
    int r = 0;

    for (r = 0; r < l2; r++) {
        if (str[c + r] != sub[r])
            r = l2 + 5;
    }
    return r;
}

static char *replace_sub(const char *str, const char *sub,
const char *replace, int *count) {
    int l1 = mx_strlen(str);
    int l2 = mx_strlen(sub);
    int l3 = mx_strlen(replace);
    char *u = (char*)malloc(l1*l3);

    for (int c = 0; c < l1; c++) {
        int r = compare_string(str, sub, l2, c);

        (*count)++;
        u[*count] = str[c];
        if (r == l2) {
            for (r = 0; r<l3; r++)
                u[*count + r] = replace[r];
            (*count) = (*count) + l3 - 1;
            c = c + l2 - 1;
        }
    }
    return u;
}



