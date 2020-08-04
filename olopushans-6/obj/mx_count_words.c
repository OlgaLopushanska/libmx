#include <stdio.h>

int mx_count_words(const char *str, char c);
// int main() {
// 	//char *str = "   follow   * the white rabbit ";
// 	char *str="";
// 	printf("%d\n", mx_count_words(str, '*'));
// 	printf("%d\n", mx_count_words(" * * ", '*'));
// 	printf("%d\n", mx_count_words("   follow   * the white rabbit ", ' '));
// 	printf("%d\n", mx_count_words(NULL, ' '));
// 	return 0;
// }
// int mx_count_words(const char *str, char c) {
//     int count = 0;

//     if (str == NULL)
//         count = -1;
//     else {
//         for (int a = 1; str[a] != '\0'; a++)
//             if (str[a] == c || str[a + 1] =='\0')
//                 if (str[a - 1] != c || (str[a] != c && str[a + 1] == '\0'))
//                     count++;
//     }
//     return count;
// }

int mx_count_words(const char *str, char c) {
    int count = 0;

    if (str == NULL)
        return -1;
    if(str[0] == '\0')
        return 0;
    for (int a = 1; str[a] != '\0'; a++)
            if (str[a] == c || str[a + 1] =='\0')
                if (str[a - 1] != c || (str[a] != c && str[a + 1] == '\0'))
                    count++;
    return count;
}

