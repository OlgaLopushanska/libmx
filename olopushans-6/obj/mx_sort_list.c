#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
typedef struct s_list {
	void *data;
	struct s_list *next;
	} t_list;
t_list *mx_sort_list(t_list *lst, bool cmp(void *, void *));	
bool cmp(void *s, void *t);
void mx_printstr(const char *s);
t_list *mx_create_node(void *data);
int mx_list_size(t_list *list);

//bool (*cmp)(void *, void *) = NULL;
//cmp = &compare;
//t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *));

/*int main() {

	char *data1 = "-50";
	t_list *t1 = mx_create_node(data1);
	char *data2 = "6789";
	t_list *t2 = mx_create_node(data2);
	char *data3 = "-5657";
	t_list *t3 = mx_create_node(data3);
	char *data4 = "12";
	t_list *t4 = mx_create_node(data4);
	char *data5 = "789";
	t_list *t5 = mx_create_node(data5);
	char *data6 = "-423524";
	t_list *t6 = mx_create_node(data6);
	t1->next = t2;
	t2->next = t3;
	t3->next = t4;
	t4->next = t5;
	t5->next = t6;
	t6->next = NULL;
	t1 = mx_sort_list(t1,cmp(t1->data,t1->data));
	t_list *tmp = t1;
	//printf("%s\n-----------------------");
	while (tmp) {
		mx_printstr( tmp->data);
		mx_printstr("\n");
		tmp = tmp->next;
	}
	return 0;
}*/

t_list *mx_sort_list(t_list *lst, bool cmp(void *, void *)){
    if (!lst || !cmp)
        return lst;
    void *c;
    for (t_list *i = lst; i -> next; i = i -> next)
        for (t_list *j = i -> next; j; j = j -> next)
            if (cmp(i -> data, j -> data)){
                c = i -> data;
                i -> data = j -> data;
                j -> data = c;
            }
    return lst;
}
bool cmp(void *s, void *t) {
// 	cmp=  &logic;
// bool logic(void *f, void *s){	
	//  char *s1 = (char*)f;
	// char *s2 = (char*)s;
	// int a = 0;
	// for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++) {
		if (s > t)
			return false;
		else if (s < t)
			return true;

	// }
	// if (s1[a] == '\0')
	// 	return 1;
	// else
	// 	return 0;
}
