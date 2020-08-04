#include <stdio.h>
char *mx_strncpy(char *dst, const char *src,int len);
int main(){
	char dst[1000];
	const char *src="ywAV1H";
	int len=10; 
	//mx_strncpy(dst,src,len);
	printf("%s\n",mx_strncpy(dst,src,len));
	return 0;
}
char *mx_strncpy(char *dst, const char *src, int len) {
    int a = 0;

    for (; src[a] && a < len; a++)
	    dst[a] = src[a];
	for (; a < len; a++)
		dst[a]='\0';
    return dst;
}
