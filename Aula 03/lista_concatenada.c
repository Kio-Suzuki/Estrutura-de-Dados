#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void printList(struct node* n) {
    while (n != NULL) {
        printf("%d ", n->data);
        n = n->next;
    }
}

void push(struct node** head_ref, int new_data) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

struct node* concatenate(struct node* first, struct node* second) {
    if (first == NULL) {
        return second;
    }
    if (second == NULL) {
        return first;
    }
    struct node* ptr = first;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = second;
    return first;
}

int main() {
    struct node* head1 = NULL;
    struct node* head2 = NULL;

    push(&head1, 3);
    push(&head1, 2);
    push(&head1, 1);

    push(&head2, 6);
    push(&head2, 5);
    push(&head2, 4);

    printf("Primeira lista: ");
    printList(head1);

    printf("\nSegunda lista: ");
    printList(head2);

    head1 = concatenate(head1, head2);

    printf("\nLista concatenada: ");
    printList(head1);

    return 0;
}