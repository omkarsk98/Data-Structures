#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};

void append(int data, struct Node **head)
{
  struct Node *new = (struct Node *)malloc(sizeof(struct Node));
  struct Node *curr = *head; //for traversing
  new->data = data;
  new->next = *head;
  if (*head)
  {
    while (curr->next != *head)
      curr = curr->next;
    curr->next = new;
  }
  else
  {
    new->next = new;
    *head = new;
  }
}
void prepend(int data, struct Node** head){
  struct Node* new = (struct Node *)malloc(sizeof(struct Node));
  new->data = data;
  // new->next = new;
  if(!*head){
    new->next = new;
    *head = new;
  }
  else{
    struct Node* curr = *head;
    while(curr->next!=*head)
      curr = curr->next;
    curr->next = new;
    new->next = *head;
    *head = new;
  }
}

void printList(struct Node *head)
{
  struct Node *curr = head;
  if (head)
  {
    printf("Printing list:\n");
    do
    {
      printf("%d --> ", curr->data);
      curr = curr->next;
    } while (curr != head);
    printf(" NULL\n");
  }
  else
  {
    printf("List is empty\n");
  }
}

int main()
{
  struct Node *head = NULL;
  append(20, &head);
  append(30, &head);
  append(40, &head);
  prepend(10, &head);
  printList(head);
}