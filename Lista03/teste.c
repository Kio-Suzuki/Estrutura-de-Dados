#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteFirstNode(struct Node** head_ref) {
    struct Node* temp = *head_ref;
    *head_ref = (*head_ref)->next;
    free(temp);
}

int main() {
    struct Node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    puts("Created Linked List: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }

    deleteFirstNode(head);

    puts("\nLinked List after Deletion of first node: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }

    return 0;
}