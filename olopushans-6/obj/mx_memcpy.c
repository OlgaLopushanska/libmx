#include <stdio.h>
#include <string.h>
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
/*int main(){
	char dst[100]="dddddddddd";
	char *src="dfghhjhjkl";
	size_t n=5;
	printf("%s\n",dst);
	mx_memcpy(dst,src,n);
	printf("%s\n",dst);
	return 0;
}*/
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n){
	char *d = (char*)dst;
	char *s = (char*)src;
	for(unsigned long a = 0;a < n; a++)
		d[a]=s[a];
	return dst;
}
