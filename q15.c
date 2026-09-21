#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int hasCycle(struct Node *head) {
    struct Node *slow = head;
    struct Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;
    }

    return 0;
}

int main() {
    struct Node *head = NULL;
    struct Node *a, *b, *c, *d;

    a = malloc(sizeof(struct Node));
    b = malloc(sizeof(struct Node));
    c = malloc(sizeof(struct Node));
    d = malloc(sizeof(struct Node));

    a->data = 1;
    b->data = 2;
    c->data = 3;
    d->data = 4;

    head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b;

    if (hasCycle(head))
        printf("Cycle detected");
    else
        printf("No cycle");

    return 0;
}