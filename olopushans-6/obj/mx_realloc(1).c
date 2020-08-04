#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *mx_memmove(void *dst, const void *src, size_t len);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
void *mx_realloc(void *ptr, size_t size);
// int main(){
// 	char *ptr;
// 	ptr=(char*)malloc(10);
// 	strcpy(ptr, "fhghhkjhj");
// 	//ptr="fhghhkjhj";
// 	size_t size=5;
// 	char *p=(char*)malloc(20);
// 	strcpy(p, "fhghhkjhj"); 
// 	//printf("%s\n",ptr);
// 	printf("%s\n",realloc(ptr,size));
// 	//printf("%s\n",ptr);
// 	//printf("%s\n",p);
// 	printf("%s\n",mx_realloc(p,size));
// 	//printf("%s\n",p);
// 	return 0;
// }
static char *realloc_dop(unsigned long len, size_t size, char *w, void *ptr);

void *mx_realloc(void *ptr, size_t size) {
    char *p = NULL;
    char *w = NULL;
    unsigned long len = mx_strlen((char*)ptr);

    if (!ptr && size != 0) {
        p = (char*)malloc(size);
        return p;
    }
    if (size == 0) {
        free(ptr);
        ptr = NULL;
        return NULL;
    }
    if(size > len)
        w = mx_strnew(size);
    else 
        w = mx_strnew(len);
    w = realloc_dop(len, size, w, ptr);
    return w;
}


static char *realloc_dop(unsigned long len, size_t size, char *w, void *ptr) {   
    if(len >= size)
        mx_memmove(w, ptr, size);
    if(len < size)
        mx_memmove(w, ptr, len);
    free(ptr);
    ptr = NULL;
    return w;
}


