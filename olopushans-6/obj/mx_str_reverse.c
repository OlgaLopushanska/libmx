#include <stdio.h>
void mx_swap_char(char *s1, char *s2);
int mx_strlen(const char *s);
void mx_str_reverse(char *s);
// int main() {
// 	char str[]= "game over";
// 	mx_str_reverse(str);
// 	printf("%s\n",str);
// 	return 0;
// }


// void mx_str_reverse(char *s) {
// 	int y = mx_strlen(s);
// 	int u = y;
// 	if(!s)
//         return;

// 	if(s)
// 		for (int a = 0; a <= u / 2 - 1; a++, y--)
// 			mx_swap_char(&s[a], &s[y - 1]);
// }


void mx_str_reverse(char *s) {
    int y = 0;
 
    if(!s)
        return;
    y = mx_strlen(s) - 1;
    for (int a = 0; a <= y; a++, y--)
            mx_swap_char(&s[a], &s[y]);
}

