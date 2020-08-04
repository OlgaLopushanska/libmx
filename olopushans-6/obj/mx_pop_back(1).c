#include <stdio.h>
#include <stdlib.h>
typedef struct s_list{
	void *data;
	struct s_list *next;
}	t_list;
void mx_printstr(const char *s);
t_list *mx_create_node(void *data);
void mx_pop_back(t_list **head);
// int main (){
// 	char *data1="oiipk";
// 	t_list *t1=mx_create_node(data1);
// 	char *data2="rgfg";
// 	t_list *t2=mx_create_node(data2);
// 	char *data3="uesdsdf";
// 	t_list *t3=mx_create_node(data3);
// 	t1->next=t2;
// 	t2->next=t3;
// 	t3->next=NULL;
// 	t_list *p=t1;
// 	mx_pop_back(&t1);
// 	while(p){
// 		mx_printstr(p->data);
// 		mx_printstr("\n");
// 		p=p->next;
// 	}
// 	return 0;
// }
// void mx_pop_back(t_list **head) {
//     t_list *temp = NULL;
//     t_list *last = NULL;
//     if (head== NULL) {
//         return;
//     }
//     else {
//         temp = *head;
//         while (temp->next != NULL) {
//             last=temp;
//             temp= temp->next;
//         }
//         free(temp);
//         last->next = NULL;
//     }
// }

void mx_pop_back(t_list **head) {
    if (head == NULL || *head == NULL)
        return;
    if ((*head) -> next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    t_list *last = *head;

    while (last -> next -> next != NULL)
        last = last -> next;
    free(last -> next);
    last -> next = NULL;
}
