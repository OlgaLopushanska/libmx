#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int mx_strlen(const char *s);
char *mx_strnew(const int size);
int mx_get_substr_index(const char *str, const char *sub);
char *mx_strstr(const char *haystack, const char *needle);
/*int main() {
    const char *hayst = "FUCKING SHIRT";
    const char *need = "";
    printf("%s\n", mx_strstr(hayst, need));
    printf("%s\n", strstr(hayst, need));
    return 0;
}*/
// char *mx_strstr(const char *haystack, const char *needle) {
   
//     char *u = NULL;
//     int r = 0;
//     if (haystack == NULL || needle == NULL) return NULL;
//     else {
//         for (int a = 0; haystack[a] != '\0'; a++) {
//             int priznak = 0;
//             if (haystack[a] == needle[r]) {
//                 for (int b = 0; needle[r + b] != '\0'; b++) {
//                     if (haystack[a + b] != needle[r + b])
//                         priznak++;
//                 }
//                 if (priznak == 0) {
                  
//                     int size = 0;
//                     for (int c = a; haystack[c] != '\0'; c++)
//                         size++;
                  
//                     u = (char*)malloc(size + 1);
//                     int c;
//                     for (c = 0; c<size; c++)
//                         u[c] = haystack[c + a];
//                     u[c] = '\0';
//                     break;
//                 }
               
//             }
//         }
//     }
 
//     return u;
// }
// char *mx_strstr(const char *haystack, const char *needle) {
//     char *u;
//     int len_h = mx_strlen(haystack);
//     int len_n = mx_strlen(needle);
//     int e = mx_get_substr_index(haystack, needle);

//     if(len_n == 0)
//         return (char*)haystack;
//     if(len_h < len_n)
//         return NULL;
//     else if(e == -1) {
//         exit(0);
//     }
//     else {
//         u = mx_strnew(len_h - e);
//         for (int c = 0; c < len_h; c++)
//             u[c] = haystack[c + e];
//         return u;
//     }
// }
char *mx_strstr(const char *haystack, const char *needle) {
    //char *u;
    int len_h = mx_strlen(haystack);
    int len_n = mx_strlen(needle);
    int e = mx_get_substr_index(haystack, needle);

    if(len_n == 0)
        return (char*)haystack;
    if(len_h < len_n)
        return NULL;
    else if(e == -1) {
        exit(0);
    }
    else 
        //u = &haystack[e];
        return (char*)&haystack[e];
        
}




