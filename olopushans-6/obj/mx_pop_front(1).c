#include <stdio.h>
#include <stdlib.h>
typedef struct s_list{
	void *data;
	struct s_list *next;
}	t_list;
void mx_pop_front(t_list **head);
t_list *mx_create_node(void *data);
void mx_printstr(const char *s);
/*int main(){
	char *data1="ghgj";
	t_list *t1=mx_create_node(data1);
	char *data2="wdsds";
	t_list *t2=mx_create_node(data2);
	char *data3="fffgfgg";
	t_list *t3=mx_create_node(data3);
	t1->next=t2;
	t2->next=t3;
	t3->next=NULL;
	while(t1){
		mx_printstr(t1->data);
		mx_printstr("\n");
		t1=t1->next;
	}
	mx_printstr("\n\n\n");
	mx_pop_front(&t1);
	while(t2){
		mx_printstr(t2->data);
		mx_printstr("\n");
		t2=t2->next;
	}
	return 0;
}*/

void mx_pop_front(t_list **head) {
    if (*head == NULL || head == NULL)
        return;
    t_list *p = (*head) -> next;

    free(*head);
    *head = p;
}
