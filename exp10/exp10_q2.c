#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newNode;
    int n, pos, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if(head == NULL){
            head = temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newNode->data);

    temp = head;
    for(i=1; i<pos-1; i++){
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    temp = head;
    printf("\nUpdated List: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
