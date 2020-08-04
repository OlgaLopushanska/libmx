#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
//char *yoyo = NULL;
char *mx_strnew(const int size);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
int mx_strlen(const char *s);
//char* str_move_left(char* in, int r);
//char *init_yoyo(char * yo, int delet);
//int read_file_to_line(const int fd, size_t buf_size, int *pos);

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd);
// int main() {
// 	//char delim = 'f';
// 	//size_t buf_size = 10000;
// 	int fd = open("test.txt", O_RDONLY);
// 	char *lineptr = mx_strnew(10000);
// 	printf("%d\n%s\n", mx_read_line(&lineptr, 1000, '.', fd), lineptr);
// 	printf("%d\n%s\n", mx_read_line(&lineptr, 35, '.', fd), lineptr);
// 	printf("%d\n%s\n", mx_read_line(&lineptr, 1000, ' ', fd), lineptr);
// 	return 0;
// }

	
// char* mx_str_move_left(char* in, int r);

// char *mx_init_yoyo(char * yo, int delet);

// int mx_read_file_to_line(const int fd, size_t buf_size, int *pos);

// int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
// 	int pos = 0;
// 	int a = 0;

// 	if (fd < 0)
// 		return -2;
// 	yoyo = mx_init_yoyo(yoyo, 0);
// 	for (a = -1; (*lineptr)[a] != delim; a++) {
// 		if (yoyo[pos] == '\0') {
// 			int size = mx_read_file_to_line(fd, buf_size, &pos);
// 			if (size == 0)
// 				return -1;
// 		}
// 		(*lineptr)[a + 1] = yoyo[pos];
// 		pos++;
// 	}
// 	yoyo = mx_str_move_left(yoyo, pos);
// 	(*lineptr)[a] = '\0';
// 	return a;
// }


// char* mx_str_move_left(char* in, int r) {
// 	int a = 0;

// 	for (a = 0; in[r] != '\0'; a++) {
// 		in[a] = in[r];
// 		r++;
// 	}
// 	in[a] = '\0';
// 	return in;
// }

// char *mx_init_yoyo(char * yo, int delet) {
// 	if (yo && delet) {
// 		free(yo);
// 		yo = NULL;
// 	}
// 	if (!yo)
// 		yo = mx_strnew(10000);
// 	return yo;
// }

// int mx_read_file_to_line(const int fd, size_t buf_size, int *pos) {
// 	yoyo = mx_init_yoyo(yoyo, 1);
// 	int size = read(fd, yoyo, buf_size);
// 	*pos = 0;
// 	return size;
// // }
// int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
//     int len = 1;
//     char *u = NULL;
//     char *out = NULL;

//     if (buf_size >= 0) {
//         if (fd == -1)
//             return -2;
//         u = mx_strnew(214740);
//         for (; u[len - 1] != delim; len++) {
//             int e = read(fd, &u[len], 1);

//             if (u[len] == EOF)
//                 return -1;
//             if (e < 0)
//                 return -2;
//         }
//         out = mx_strnew(len - 1);
//         for (int a = 0; a < len - 2; a++)
//             out[a] = u[a + 1];
//         *lineptr = &out[0];
//         free(u);
//     }
//     return len - 2;
// }
static char* str_move_left(char* in, int *r, char **lineptr, int len);

static char *init_yoyo(char *yo, char **bufer, int delet, size_t size);

static int read_file_to_line(const int fd, size_t buf_size,
char **yoyo, char **lineptr);

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    static char *yoyo = NULL;
    int s = yoyo ? mx_strlen(yoyo) : buf_size;
    int size = yoyo && s > 0 ? s : buf_size;

    if (fd < 0)
        return -2;
    if (*lineptr) 
        free(*lineptr);
    if (!yoyo) {
        yoyo = mx_strnew(buf_size);
        if (read(fd, yoyo, buf_size) == 0) {
            *lineptr= mx_strnew(1);
            return -1;
        }
    }
    *lineptr = NULL;
    yoyo = (char*)init_yoyo(yoyo, lineptr, s > 0 ? 0 : size, size);
    **lineptr = delim;
    return read_file_to_line(fd, buf_size, &yoyo, lineptr);
}

static char *str_move_left(char* in, int *r, char **lineptr, int len) {
    int a = 0;
    char *buf = NULL;

    (*r)++;
    for (a = 0; in[*r] != '\0'; a++) {
        in[a] = in[*r];
        (*r)++;
    }
    in[a] = '\0';
    *r = -5;
    buf = mx_strnew(len > 0 ? len : 1);
    for (a = 0; a < len; a++)
        buf[a] = (*lineptr)[a];
    free(*lineptr);
    *lineptr = buf;
    return in;
}

static char *init_yoyo(char *yo, char **lineptr, int delet, size_t buf_size) {
    char *buf_t = NULL;

    if (yo && delet) {
        free(yo);
        yo = NULL;
    }
    if (!yo)
        yo = mx_strnew(buf_size);
    if (!(*lineptr))
        *lineptr = mx_strnew(buf_size);
    else {
        buf_t = mx_strnew(delet + buf_size);
        buf_t = mx_memcpy (buf_t, *lineptr, delet);
        free(*lineptr);
        *lineptr = buf_t;
    }
    return yo;
}

static int read_file_to_line(const int fd,
size_t buf_size, char **yoyo, char **lineptr) {
    int pos = -1;
    char delim = **lineptr;
    int size = *yoyo ? mx_strlen(*yoyo) : buf_size;

    **lineptr = '\0';
    for (int a = 0; pos++ != -5 ; a++){
        if ((*yoyo)[pos] == '\0') {
            *yoyo = (char*)init_yoyo(*yoyo, lineptr, a, buf_size);
            size=read(fd, *yoyo, buf_size);
            pos = 0;
        }
        (*lineptr)[a] = (*yoyo)[pos] != delim ? (*yoyo)[pos] : '\0';
        if ((*yoyo)[pos] == delim || size == 0) {
            *yoyo = str_move_left(*yoyo, &pos, lineptr, a);
            return size == 0 && a == 0 ? -1 : a;
        }
    }
    return 0;
}

