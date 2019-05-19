#include <stdio.h>
#include <stdlib.h>

struct Node *root = NULL;
struct Node *curr = NULL;
struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
};

struct Node *newNode(int data)
{
  struct Node *new = (struct Node *)malloc(sizeof(struct Node));
  new->data = data;
  new->left = new->right = NULL;
  return new;
}

int main()
{
  root = newNode(20);
  root->left = newNode(10);
  root->right = newNode(30);
  root->left->left = newNode(40);
}