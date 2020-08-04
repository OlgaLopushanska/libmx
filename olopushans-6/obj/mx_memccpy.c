#include <stdio.h>
#include <string.h>
void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
/*int main(){
	char dst[100]="";
	char d[100]="";
	char *s="1234567890";
	char *src="1234567890";
	size_t n=5;
	int c='5';
	printf("%s\n",dst);
	mx_memccpy(dst,src,c,n);
	printf("%s\n",dst);
	printf("%s\n",mx_memccpy(dst,src,c,n));
	printf("%s\n",d);
	memccpy(d,s,c,n);
	printf("%s\n",d);
	return 0;
}*/
void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
	char *res = NULL;
	char *d = (char*)dst;
	char *s = (char*)src;
unsigned long a;
	for (a = 0; a < n; a++) {
		if (s[a] != c) {
			d[a] = s[a];
		}
		else if (s[a] == c) {
			d[a]=s[a];
			return &d[a];
		}
	}
return res;
}

