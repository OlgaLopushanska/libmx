#include <stdio.h>
#include <string.h> ///mx_print_unicode
#include <unistd.h>
#include <wchar.h>
#include <stdlib.h>
#include <unistd.h>
/*int main(){
	wchar_t c=0x72d7;
	//wchar_t c=504;
	mx_print_unicode(c);
	return 0;
}*/
///////////////////////////////////////
/*int main(){               //mx_print_strarr
	//char *arr[6]={"eee","gytuy","gghjghjkhk","gu","i",NULL};
	//const char *del=" ";
	char *arr[] = {"o8QoHOgz", "VCnJdkseB3RGoTKFLQXh07k6kseB3YDUBx", "qhg", "OsekseB39Ul", 
	"Gl5TquMkseB3FaiHx", "DGhq", 
	"OkseB3de35ljt3e5qrunkseB3l7hCrUgmPIC4kseB3WqqUVjP1NQXkseB3iww3E1ifwookseB3miDCRzzsvQBjCEkseB3rFrVQkEM16kseB3WtSlMwpPkvtkseB3rPhoWIDKifkseB3FeCwxrnH2AgO1", NULL};
	char *delim = "*";
	mx_print_strarr(arr,delim);
	return 0;
}*/
/////////////////////////////////////////
/*int main(){
	int n=0;     //mx_printint 0 10000 -2147483648
	mx_printint(n);
}*/
/////////////////////////
/*int main(){       //mx_nbr_to_hex
	unsigned long e=0;
	char *u=mx_nbr_to_hex(e);
	printf("%s\n",u);
	return 0;
}*/
///////////////////
 /*int mx_def_end(const char *str, int sz);
 int mx_def_start(const char *str, int sz);
 int mx_strlen(const char *s);  //mx_del_extra_spaces
 bool mx_isspace(char c);
char *mx_strnew(const int size);
int main() {
	char *name = "I   \n\n\n\n don't KNOW\n\n\nwhy\n\n\nusay \nGbye\n";
	printf("%s\n", mx_del_extra_spaces(name));
	return 0;
}*/
///////////////////////////////////
//int mx_count_words(const char *str, char c);
/*int main() {
	//char *str = "   follow   * the white rabbit ";
	char *str="*";
	printf("%d\n", mx_count_words(str, '*'));
	printf("%d\n", mx_count_words(" * * ", '*'));
	printf("%d\n", mx_count_words("   follow   * the white rabbit ", ' '));
	printf("%d\n", mx_count_words(NULL, ' '));
	return 0;
}*/
//////////////////////////////////
//char *mx_strnew(const int size);
/*int main(){   //itoa
	int num=214748;
	char *r=mx_itoa(num);
	printf("%s",r);
}*/
///////////////////////////////////\
//#include <string.h>
/*void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
int main(){
	char *d="ddgfhghhjkjk yu ghgj";
	char *r="yu";
	size_t big_len=20;
	size_t little_len=2;
	printf("%s\n",memmem(d,big_len,r,little_len));
	printf("%s\n",mx_memmem(d,big_len,r,little_len));
	return 0;
}*/
///////////////////////////////////////////
/*int main() {
	char *src="1234567890";
	char dst[10]="rrrrrrr";
	char *r="1234567890";   //memmove
	char u[10]="rrrrrrr";
	printf("%s\n",dst);
	size_t len=3;
	memmove(dst,&src[3],len);
	printf("%s\n\n\n", dst);
	printf("%s\n",u);
	mx_memmove(u,&r[3],len);
	printf("%s\n",u);

	return 0;
}*/
///////////////////////////
/*int main(){    //mx_print_strarr
	//char *arr[6]={"eee","gytuy","gghjghjkhk","gu","i",NULL};
	//const char *del=" ";
	char *arr[] = {"o8QoHOgz", "VCnJdkseB3RGoTKFLQXh07k6kseB3YDUBx", "qhg", "OsekseB39Ul", 
	"Gl5TquMkseB3FaiHx", "DGhq", 
	"OkseB3de35ljt3e5qrunkseB3l7hCrUgmPIC4kseB3WqqUVjP1NQXkseB3iww3E1ifwookseB3miDCRzzsvQBjCEkseB3rFrVQkEM16kseB3WtSlMwpPkvtkseB3rPhoWIDKifkseB3FeCwxrnH2AgO1", NULL};
	char *delim = "*";
	mx_print_strarr(arr,delim);
	return 0;
}*/
////////////////////////////
//char *mx_strnew(const int size);
/*int main() {   //strsplit
char *s = " Knock, knock, Neo. ";
char c = ' ';
char **arr= mx_strsplit(s, c);
for (int a = 0; arr[a] != NULL; a++)
printf("%s\n ", arr[a]);
system("leaks -q n");
return 0;
}*/
/////////////////////////////////////////////
/*#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>*/ //mx_file-to_str
/*int main() {
	const char *f = "test.txt";
	char *m=mx_file_to_str(f);
	printf("%s\n", m);
	system("leaks -q n");
	return 0;
}*/
////////////////////////////