#include <stdio.h>
#include <stdlib.h>
char *mx_strnew(const int size);
void mx_strdel(char **str); 
void mx_del_strarr(char ***arr);
char *mx_strdup(const char *s1);
/*int main() {
int i = 0;
	char **str3 = (char **)malloc(sizeof(char*) *  6);
	while (i < 5)
	{
		if (i % 2 == 0)
			str3[i] = mx_strdup("ds");
		else
			str3[i] = mx_strdup("kek");
		i++;
	}
	str3[i] = NULL;
	i = 0;
	mx_del_strarr(&str3);
	//for (;str3[i]; i++)
		printf("%s\n", *str3);
	//mx_del_strarr(&str3);
}
*/
// void mx_del_strarr(char ***arr) {
// 	if(arr){
// 		if(*arr){
// 	for(int a = 0; *arr[a] != NULL; a++)
// 		mx_strdel(&(*arr)[a]);
// 	}
// 		free(*arr);
// 		*arr=NULL;
// 		printf("%s",*arr[0]);
// 	}
// }

void mx_del_strarr(char ***arr) {
	char *p = **arr;
	while (*p) {
		mx_strdel(&p);
		p++;
	}
	free(arr);
	arr = NULL;
}

// void mx_del_strarr(char ***arr) {
//     if (arr){
//         if (*arr)
//             for(int i = -1; (*arr)[++i]; mx_strdel(&((*arr)[i])));
//         free(*arr);
//         *arr = NULL;
//     }
// }
