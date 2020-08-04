#include <stdlib.h>
#include <stdio.h>
char *mx_strnew(const int size);
/*int main(){
	const int s=0;
	printf("%s",mx_strnew(s));
	return 0;
}*/
// char *mx_strnew(const int size){
// 	if(size<0) 
// 		return NULL;
// 	else{
// 	char *n;
// 	n=malloc(sizeof(size+1));
// 	for(int a=0;a<=size;a++)
// 	n[a]='7';
//     return n;
// }
// }

char *mx_strnew(const int size) {
    if (size < 0)
        return NULL;
    char *p = (char *) malloc(sizeof(char) * (size+1));
    if (p != NULL)
        for (int i = 0; i < size + 1; i++) {
             p[i] = '\0'; 
        }
    return p;
}
