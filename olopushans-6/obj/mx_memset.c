#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void *mx_memset(void *b, int c, size_t len);
/*int main() {
	size_t n = 33;
	char b1[] = "baby my kittle baby dont cry ";
	void *b2 = "babymy little baby dont cry ";
	int c = 'g';
	printf("b1 %s  c  %c\n", b1, c);
	memset(b1, c, n);
	printf("%s\n", b1);
	printf("%s\n", b2);
	mx_memset(b1,c,n);
	printf("%s\n", b1);
	return 0;
}*/
void *mx_memset(void *b, int c, size_t len) {
	char* p = (char*)b;
		for (unsigned long a = 0; a<len; a++)
				p[a] = c;
			return b;
}
