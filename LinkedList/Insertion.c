#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};

void insertAtPoisiton(int data, struct Node **head, int position)
{
  struct Node *new = (struct Node *)malloc(sizeof(struct Node));
  new->data = data;
  struct Node *curr = *head;
  for (int i = 0; i < position - 2; i++)
  {
    if (curr->next)
      curr = curr->next;
    else
    {
      printf("Nodes over");
      break;
    }
  }
  new->next = curr->next;
  curr->next = new;
}

void append(int data, struct Node **head)
{
  struct Node *new = (struct Node *)malloc(sizeof(struct Node));
  new->data = data;
  new->next = NULL;
  if (!*head)
  {
    *head = new;
  }
  else
  {
    struct Node *curr = *head;
    while (curr->next)
    {
      curr = curr->next;
    }
    curr->next = new;
  }
}

int search(int key, struct Node **head)
{
  struct Node *curr = *head;
  int count = 0;
  while (curr)
  {
    if (curr->data == key)
      return count + 1;
    curr = curr->next;
    count++;
  }
  return -1;
}

void prepend(int data, struct Node **head)
{
  struct Node *new = (struct Node *)malloc(sizeof(struct Node));
  new->data = data;
  new->next = *head;
  *head = new;
}

void printList(struct Node *node)
{
  printf("Printing List:\n");
  while (node != NULL)
  {
    printf("%d --> ", node->data);
    node = node->next;
  }
  printf(" NULL\n");
}

int deleteKey(int key, struct Node **head)
{
  struct Node *curr = *head;
  while (curr)
  {
    if (curr->data == key && curr == *head)
    {
      *head = curr->next;
      return 1;
    }
    else if (curr->next->data == key && curr->next->next)
    {
      struct Node *temp = curr->next;
      curr->next = curr->next->next;
      free(temp);
      return 1;
    }
    else if (curr->next->data == key && !curr->next->next)
    {
      struct Node *temp = curr->next;
      curr->next = NULL;
      free(temp);
      return 1;
    }
    else
      return -1;
    curr = curr->next;
  }
}

int findLengthOfLinkedList(struct Node**head){
  int count = 0;
  struct Node* curr = *head;
  while(curr){
    count++;
    curr = curr->next;
  }
  return count;
}

int main()
{
  struct Node *head = NULL;
  append(26, &head);
  append(28, &head);
  append(39, &head);
  prepend(30, &head);
  insertAtPoisiton(35, &head, 5);
  
  
  // int search_for = 398;
  // int search_result = search(search_for, &head);
  // if (search_result == -1)
  //   printf("%d not found\n", search_for);
  // else
  //   printf("%d found at %d position\n", search_for, search_result);


  // int delete_key = 358;
  // int delete_result = deleteKey(delete_key, &head);
  // if (delete_result != -1)
  //   printf("%d deleted successfully!\n", delete_key);
  // else
  //   printf("%d not found.\n", delete_key);
  

  // printf("Length of LinkedList:%d\n",findLengthOfLinkedList(&head));
  printList(head);
}