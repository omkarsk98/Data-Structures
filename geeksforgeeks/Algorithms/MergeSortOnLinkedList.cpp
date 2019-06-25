#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
  Node(int x)
  {
    data = x;
    next = NULL;
  }
};
//Position this line where user code will be pasted.
void printList(Node *node)
{
  while (node != NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
  cout << endl;
}
void push(struct Node **head_ref, int new_data)
{
  Node *new_node = new Node(new_data);
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}
void FrontBackSplit(Node *source,
                    Node **frontRef, Node **backRef)
{
  Node *fast;
  Node *slow;
  slow = source;
  fast = source->next;
  while (fast != NULL)
  {
    fast = fast->next;
    if (fast != NULL)
    {
      slow = slow->next;
      fast = fast->next;
    }
  }
  *frontRef = source;
  *backRef = slow->next;
  cout<<"Front:"<<(*frontRef)->data<<"\tBack:"<<(*backRef)->data<<endl;
  slow->next = NULL;
}
Node *SortedMerge(Node *a, Node *b)
{
  if(a != NULL)
    cout<<"a:"<<a->data;
  if(b != NULL)
    cout<<" b:"<<b->data;
  cout<<endl;
  Node *result = NULL;

  if (a == NULL)
    return (b);
  else if (b == NULL)
    return (a);

  if (a->data <= b->data)
  {
    cout<<"a is smaller\n";
    result = a;
    result->next = SortedMerge(a->next, b);
  }
  else
  {
    cout<<"b is smaller\n";
    result = b;
    result->next = SortedMerge(b->next,a);
  }
  cout<<"After merging"<<endl;
  printList(result);
  return (result);
}
Node *mergeSort(Node *head)
{
  cout<<"Printing list from:"<<head->data<<endl;
  printList(head);
  Node *start = head;
  Node *a;
  Node *b;

  if ((head == NULL) || (head->next == NULL))
    return NULL;

  cout<<"Splitting for source at:"<<start->data<<endl;
  FrontBackSplit(head, &a, &b);

  mergeSort(a);
  mergeSort(b);

  head = SortedMerge(a, b);
}
int main()
{
  long test;
  cin >> test;
  while (test--)
  {
    struct Node *a = NULL;
    long n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> tmp;
      push(&a, tmp);
    }
    a = mergeSort(a);
    printList(a);
  }
  return 0;
}
/* 
1
5 
3 5 4 2 1
*/