#include <stdio.h>
#include <stdlib.h>
struct Node *head = NULL;
struct Node *curr = NULL;

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
};

void append(int data)
{
  struct Node *new = (struct Node *)malloc(sizeof(struct Node));
  new->data = data;
  if (!head)
    head = new;
  else
  {
    curr = head;
    while (curr->next)
      curr = curr->next;
    curr->next = new;
    new->prev = curr;
  }
}

void printList()
{
  curr = head;
  if (!head)
    printf("List Empty\n");
  else{
    curr = head;
    while(curr){
      printf("%d --> ",curr->data);
      curr = curr->data;
    }
    printf(" NULL\n");
  }
}

int main()
{
  append(20);
  append(30);
  printList();
}