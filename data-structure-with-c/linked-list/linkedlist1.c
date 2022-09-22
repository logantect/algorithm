#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode {
    element data;
    struct ListNode *link;
} ListNode;

void error(char *message) {
    fprintf(stderr, "%s\n", message);
    exit(1);
}

ListNode *insert_first(ListNode *head, int value) {
    ListNode *p = (ListNode *) malloc(sizeof(ListNode));    //(1)
    p->data = value;                    // (2)
    p->link = head;
    head = p;
    return head;
}

ListNode *insert(ListNode *head, ListNode *pre, element value) {
    ListNode *p = (ListNode *) malloc(sizeof(ListNode));    //(1)
    p->data = value;        //(2)
    p->link = pre->link;    //(3)
    pre->link = p;        //(4)
    return head;        //(5)
}

ListNode *delete_first(ListNode *head) {
    ListNode *removed;
    if (head == NULL) return NULL;
    removed = head;    // (1)
    head = removed->link;    // (2)
    free(removed);        // (3)
    return head;        // (4)
}

ListNode *delete(ListNode *head, ListNode *pre) {
    ListNode *removed;
    removed = pre->link;
    pre->link = removed->link;        // (2)
    free(removed);            // (3)
    return head;            // (4)
}

void print_list(ListNode *head) {
    for (ListNode *p = head; p != NULL; p = p->link)
        printf("%d->", p->data);
    printf("NULL \n");
}

int main(void) {
    ListNode *head = NULL;

    for (int i = 0; i < 5; i++) {
        head = insert_first(head, i);
        print_list(head);
    }
    for (int i = 0; i < 5; i++) {
        head = delete_first(head);
        print_list(head);
    }
    return 0;
}