#include <stdio.h>
#include <stdlib.h>
char *mx_strjoin(const char *s1, const char *s2);
/*int main(){
	char *str1="this";
 	char *str2="dodge ";
	char *str3=NULL;
	printf("%s\n",mx_strjoin(str2,str1));
	printf("%s\n",mx_strjoin(str1,str3));
	printf("%s\n",mx_strjoin(str3,str3));
	return 0;
}*/
char *mx_strjoin(const char *s1, const char *s2){
	char *u;
	if(s1==NULL && s2==NULL)
		u= NULL;
	else{
	int length1=0;
	int length2=0;
		if(s1!=NULL){	
 			for(int a=0;s1[a]!='\0';a++)
				length1++;
		}
		if(s2!=NULL){
			for(int a=0;s2[a]!='\0';a++)
				length2++;
		}
	u=(char*)malloc(length1+1+length2);
	for(int a=0;a<length1;a++)
		u[a]=s1[a];
	for(int a=0;a<length2;a++)
		u[a+length1]=s2[a];
	u[length1+length2]='\0';
	}
	return u;
}


