#include <stdio.h>
char *mx_strndup(const char *s1, size_t n);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strlen(const char *s);
/*int main(){
	char *s = "Do not hate me for my code";;
	size_t n=10;
	printf("%s\n",mx_strndup(s,n));
	return 0;
}*/
char *mx_strndup(const char *s1, size_t n){
	unsigned long size=mx_strlen(s1);
	char *t=NULL;
	if(n >= size){
		t = mx_strnew(size);
		if(t) 
			
		mx_strcpy(t,s1);
	}
	else 
		if(n<size){
		t = mx_strnew(n);
		if(t) 
			
		mx_strncpy(t,s1,n);
	}
return t;

}

