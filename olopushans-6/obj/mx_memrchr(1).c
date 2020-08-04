#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void *mx_memrchr(const void *s, int c, size_t n);
/*int main() {
	char *s = "dffghgjhjkalkll";
	//char *st = "dffghgjhjkjlkll";
	size_t n = 11;
	int c = 'f';
	//printf("%s\n", memrchr(s, c, n));
	printf("%s\n", mx_memrchr(s, c, n));
	return 0;
}*/
void *mx_memrchr(const void *s, int c, size_t n) {
	char *p = (char*)s;
	char *d = NULL;
	int size = 0;
	for (; p[size] != '\0'; size++);
	for ( int a = n-1; a >= 0; a--) {
		if (p[a] == c) {
			d = &p[a];
			a = -1;
		}
	}
	return d;
}

