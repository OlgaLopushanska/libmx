#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
char *mx_del_extra_spaces(const char *str);
// static int def_white(const char *str, int end);
// static char *write_str(const char *str, int end, int r, int start);
 int mx_def_end(const char *str, int sz);
 int mx_def_start(const char *str, int sz);
 int mx_strlen(const char *s);
 bool mx_isspace(char c);
char *mx_strnew(const int size);
/*int main() {
	char *name = "I   \n\n\n\n don't KNOW\n\n\nwhy\n\n\nusay \nGbye\n";
	printf("%s\n", mx_del_extra_spaces(name));
	return 0;
}*/
// char *mx_del_extra_spaces(const char *str) {
//     char *u = NULL;

//     if (str == NULL)
//         u = NULL;
//     else {
//         int r = 0;
//         int sz = mx_strlen(str);
//         int end = mx_def_end(str, sz);
//         int start = mx_def_start(str, sz);
//         r = def_white(str, end);
//         u = write_str(str, end, r, start);
//     }
//     return u;
// }

// static int def_white(const char *str, int end) {
//     int priznak = 0;
//     int white = 0;
//     int r = 0;

//     for (int a = 0; a <= end; a++) {
//         white = 0;
//         for (int b = 0; b <= 5; b++) 
//             if (mx_space(str[a]) == true) 
//                 white++;
//         if (white == 0) {
//             r++;
//             priznak = 1;
//         }
//         if (white > 0 && priznak == 1) {
//             r++;
//             priznak = 0;
//         }
//     }
//     return r;
// }

// static char *write_str(const char *str, int end, int r, int start) {
//     char *u = mx_strnew(r);
//     int priznak = 0;
//     int white = 0;
//     int t = 0;

//     for (int a = start; a <= end; a++) {
//         white = 0;
//         for (int b = 0; b <= 5; b++)
//             if (mx_space(str[a]) == true) 
//                 white++;
//         if (white == 0) {
//             u[t++] = str[a];
//             priznak = 1;
//         }
//         if (white > 0 && priznak == 1) {
//             u[t++] = ' ';
//             priznak = 0;
//         }
//     }
//     return u;
// }


static int def_white(const char *str, int end, int start);

static char *write_str(const char *str, int end, int r, int start);

char *mx_del_extra_spaces(const char *str) {
    char *u = NULL;

    if (str == NULL)
        u = NULL;
    else {
        int r = 0;
        int sz = mx_strlen(str);
        int end = mx_def_end(str, sz);
        int start = mx_def_start(str, sz);
        
        r = def_white(str, end, start);
        u = write_str(str, end, r, start);
    }
    return u;
}

static int def_white(const char *str, int end, int start) {
    int priznak = 0;
    int r = 0;

    for (int a = start; a <= end; a++) {
        if (mx_isspace(str[a]) == false) {
            r++;
            priznak=1;
        }
        if (mx_isspace(str[a]) == true && priznak == 1) {
            r++;
            priznak = 0;
        }
    }       
    return r;
}


static char *write_str(const char *str, int end, int r, int start) {
    char *u = mx_strnew(r);
    int priznak = 0;
    int t = 0;

    for (int a = start; a <= end; a++) {
         if (mx_isspace(str[a]) == false) {
            u[t++] = str[a];
            priznak=1;
        }
        if (mx_isspace(str[a]) == true && priznak == 1) {
            u[t++] = ' ';
            priznak = 0;
        }
    } 
    return u;
}
