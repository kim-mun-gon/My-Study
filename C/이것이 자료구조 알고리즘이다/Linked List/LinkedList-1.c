#include <stdio.h>
#include <stdlib.h>

struct NODE // 연결 리스트의 노드 구조체
{
    struct NODE *next; // 다음 노드의 주소를 저장할 포인터
    int data;          // 데이터를 저장할 멤버
};

void addFirst(struct NODE *target, int data)
{
    struct NODE *newNode = malloc(sizeof(struct NODE));
    newNode->next = target->next;
    newNode->data = data;

    target->next = newNode;
}

void removeFirst(struct NODE *target)
{
    struct NODE *removeNode = target->next;
    target->next = removeNode->next;

    free(removeNode);
}
int main(void)
{
    struct NODE *head = malloc(sizeof(struct NODE));

    head->next = NULL;

    addFirst(head, 10);
    addFirst(head, 20);
    addFirst(head, 30);

    removeFirst(head);
    
    struct NODE *curr = head->next;
    while(curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    curr = head->next;
    while(curr != NULL)
    {
        struct NODE *next = curr->next;
        free(curr);
        curr = next;
    }
    
    free(head);

    return 0;
}