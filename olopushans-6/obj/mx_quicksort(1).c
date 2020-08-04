#include <stdio.h>
#include <stdlib.h>
int sort(char **arr, int *ar, int left, int right);
int mx_quicksort(char **arr, int left, int right);
int mx_strlen(const char *s) {
	int y = 0;
	for (; *s; s++)
		y++;
	return y;
}

/*int main() {
	char *arr[6] = { "DMC", "Clint Eastwood", "Dr Brown", "Einstein", "Jessica", "Beef Tannen" };
	//char *arr[6] = { "DMC12345", "DMC312", "DMC3", "DMC4587", "DMC1", "DMC" };
	//char *arr[6] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"}; 
	char left = 0;
	char right = 5;
	int t = mx_quicksort(arr, left, right);
	printf("%d\n", t);
	// for (int a = left; a <= right; a++) {
	// 	printf("%d   %s\n", a, arr[a]);

	

	return 0;
}*/
int sort_exchange(char **arr, int *ar, int L, int R, int r);

int sort2(char **arr, int *ar, int left, int right, int r);

int sort(char **arr, int *ar, int left, int right);

int mx_quicksort(char **arr, int left, int right) {
	int u = -1;

	if (&arr[0] != NULL) {
		int size = right - left;
		int *ar = (int*)malloc((size + 1) * 4);
		for (int a = 0; a <= size; a++) 
			ar[a] = mx_strlen(arr[a]);
		u = sort(arr, ar, left, right);
		free(ar);
	}
	return u;
}

int sort_exchange(char **arr, int *ar, int L, int R, int r) {
	int e = ar[L];
	char * b = arr[L];

	ar[L] = ar[R];
	arr[L] = arr[R];
	ar[R] = e;
	arr[R] = b;
	r++;
	return r;
}

int sort2(char **arr, int *ar, int left, int right, int r) {
	int pilot = (left + right) / 2;
	int oport = ar[pilot];
	int L = left;
	int R = right;

	while (L < R) {
		for (; L < R && ar[L] < oport; L++);
		for (; L < R && ar[R] > oport; R--);
		if (L < R && ar[L] != ar[R])
			r = sort_exchange(arr, ar, L, R, r);
		L++;
	}
	if (L == right)
		return r;
	r = r + sort(arr, ar, left, L);
	r = r + sort(arr, ar, R, right);
	return r;
}

int sort(char **arr, int *ar, int left, int right) {
	int r = 0;

	if (left >= right)
		return 0;
	if (left == right - 1 && ar[left] <= ar[right])
		return 0;
	else 
		r = sort2(arr, ar, left, right, r);
	return r;
}








