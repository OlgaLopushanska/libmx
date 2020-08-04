#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void *mx_memmove(void *dst, const void *src, size_t len);
/*int main() {
	char *src="1234567890";
	char dst[10]="rrrrrrr";
	char *r="1234567890";
	char u[10]="rrrrrrr";
	printf("%s\n",dst);
	size_t len=3;
	memmove(dst,&src[3],len);
	printf("%s\n\n\n", dst);
	printf("%s\n",u);
	mx_memmove(u,&r[3],len);
	printf("%s\n",u);

	return 0;
}*/
void *mx_memmove(void *dst, const void *src, size_t len) {
	char *res = NULL;
	char *d = (char*)dst;
	char *s = (char*)src;
	res = (char*)malloc(len);
	for (unsigned long a = 0; a < len; a++)
		res[a] = s[a];
	for (unsigned long a = 0; a < len; a++)
		d[a] = res[a];
	free(res);
	return d;
}


