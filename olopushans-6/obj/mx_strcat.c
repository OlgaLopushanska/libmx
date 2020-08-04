#include <stdio.h>
//char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcat(char *restrict s1, const char *restrict s2);
/*int main(){
	char s1[30]="Lemon";
	char s2[7]="Apple";
	//char s3[30]="Lemon";
	printf("%s\n",mx_strcat(s1,s2));
	printf("%s\n",mx_strcat(s1,s2));
	return 0;
}*/
// char *mx_strcat(char *restrict s1, const char *restrict s2){
// 	int length1=0;
// 	for(int a=0;s1[a]!='\0';a++)
// 		length1++;
// 	int length2=0;
// 	for(int a=0;s2[a]!='\0';a++)
// 		length2++;
// 		//printf("%d  %d\n",length1,length2);
// 	char *src=mx_strnew(length1+1+length2);
// 	int a;

// 	for(a=0;a<length1;a++)
// 		src[a]=s1[a];
// 	for(a=0;a<length2;a++)
// 		src[a+length1]=s2[a];
//         src[a+length1]='\0';
//     return src;
// }

char *mx_strcat(char *restrict s1, const char *restrict s2) {
	int length1 = mx_strlen(s1);
	int length2 = mx_strlen(s2);
	//char *src = mx_strnew(length1 + 1 + length2);
	//
	//int a;
	
	for (int a = 0; a < length2; a++)
		s1[a + length1] = s2[a];
	return s1;
}


