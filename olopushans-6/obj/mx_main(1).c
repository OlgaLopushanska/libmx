
// #include <stdio.h>
// #include <string.h>
// void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
// int main(){
// 	char *d="0eNguEAE8CoHU KaQIXMH3Gu4tvVwRllJ0ZVSIu7JXM13I0eNguEAE8CoHU\nKaQIXMH3Gu4tvVwRllJ0ZVSIu7JXM13I0eNguEAE8CoHU\nKaQIXMH3Gu4tvVwRllJ0ZVSIu7JXM13I0eNguEAE8CoHU\nKaQIXMH3Gu4tvVwRllJ0ZVSIu7JXM13I0eNguEAE8CoHU";
// 	char *r="0eNguEAE8CoHU KaQIXMH3Gu4tvVwRllJ0ZVSIu7JXM13I0eNguEAE8CoHU\nKaQIXMH3Gu4tvVwRllJ0ZVSIu7JXM13I0eNguEAE8CoHU\nKaQIXMH3Gu4tvVwRllJ0ZVSIu7JXM13I0eNguEAE8CoHU\nKaQIXMH3Gu4tvVwRllJ0ZVSIu7JXM13I0eNguEAE8CoHU";
// 	size_t big_len=20;
// 	size_t little_len=2;
// 	printf("%s\n\n",memmem(d,big_len,r,little_len));
// 	char *u=mx_memmem(d,big_len,r,little_len);
	
// 	printf("%s\n",u);
// 	system("leaks -q n");
// 	return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// int mx_count_words(const char *str, char c);
// char **mx_strsplit(const char *s, char c);
// char *mx_strnew(const int size);

// // 	 int count, char **arr);
// int main() {
// char *s = " Knock, knock, Neo. ";
// char c = ' ';
// char **arr= mx_strsplit(s, c);
// for (int a = 0; arr[a] != NULL; a++)
// printf("%s\n ", arr[a]);
// system("leaks -q n");
// return 0;
// }
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
//char *yoyo = NULL;
char *mx_strnew(const int size);
//char* str_move_left(char* in, int r);
//char *init_yoyo(char * yo, int delet);
//int read_file_to_line(const int fd, size_t buf_size, int *pos);

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd);
int main() {
	//char delim = 'f';
	//size_t buf_size = 10000;
	int fd = open("test.txt", O_RDONLY);
	char *lineptr = mx_strnew(10000);
	int y=mx_read_line(&lineptr, 1000, '.', fd);
	printf("%d\n%s\n", y, lineptr);
	printf("%d\n%s\n", mx_read_line(&lineptr, 35, '.', fd), lineptr);
	printf("%d\n%s\n", mx_read_line(&lineptr, 1000, ' ', fd), lineptr);
	system("leaks -q n");
	return 0;
}
