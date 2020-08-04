#include <stdio.h>
#include <string.h>
//int mx_strcmp(const char *s1, const char *s2);
int mx_memcmp(const void *s1, const void *s2, size_t n);
/*int main(){
	char *dst="abcdfghjkl";
	char *src="abcxcvbnm,.";
	size_t n=6;
	printf("%d\n",memcmp(dst,src,n));
	printf("%d\n",mx_memcmp(dst,src,n));
	return 0;
}*/
int mx_memcmp(const void *s1, const void *s2, size_t n){
	if(n == 0)
		return 0;
	char *d=(char*)s1;
	char *s=(char*)s2;
	unsigned int i = 0;

    while(d[i]!='\0' || s[i]!='\0'){
	  	if(d[i]!=s[i]){
			return (d[i]-s[i]);
		}
		i++;
	}
	return (d[i]-s[i]);
 }
