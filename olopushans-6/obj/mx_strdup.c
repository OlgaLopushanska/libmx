#include <stdio.h>
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strdup(const char *s1);
/*int main(){
	char *p="";
	printf("%s\n",mx_strdup(p));
	return 0;
}*/
char *mx_strdup(const char *s1) {
	int size = mx_strlen(s1);
	char *t = mx_strnew(size);
	if (t)
		mx_strcpy(t, s1);
	return t;
}
