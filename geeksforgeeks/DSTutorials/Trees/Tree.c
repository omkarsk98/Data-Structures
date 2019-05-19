#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct Node *root = NULL;
struct Node *curr = NULL;
struct Node *searched_node = NULL;

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
};

struct Node *addNode(int data, struct Node *curr)
{
  struct Node *new = (struct Node *)malloc(sizeof(struct Node));
  new->data = data;
  new->left = new->right = NULL;
  if (!curr)
  {
    // printf("Added %d\n",data);
    curr = new;
    return new;
  }
  if (data < curr->data)
    curr->left = addNode(data, curr->left);
  else
    curr->right = addNode(data, curr->right);
}

void inorder(struct Node *curr)
{
  if (curr)
  {
    inorder(curr->left);
    printf("%d ", curr->data);
    inorder(curr->right);
  }
  else
    return;
}

void preorder(struct Node *curr)
{
  if (curr)
  {
    printf("%d \n", curr->data);
    preorder(curr->left);
    preorder(curr->right);
  }
  else
    return;
}
struct Node *findRightMost(struct Node *node)
{
  if (node->right)
  {
    return findRightMost(node->right);
  }
  return node;
}

void findNode(struct Node *node, int key, struct Node **found)
{
  // printf("\nAt:%d", node->data);
  if (!node)
  {
    return;
  }
  findNode(node->left, key, found);
  if (node->data == key)
    *found = node;
  findNode(node->right, key, found);
}

void delete (struct Node *node, int key)
{
  struct Node *last = findRightMost(node);
  struct Node *to_delete = NULL;
  findNode(node, key, &to_delete);
  to_delete->data = last->data;
  free(last);
}

int main()
{
  root = addNode(50, root);
  addNode(30, root);
  addNode(20, root);
  addNode(40, root);
  addNode(70, root);
  addNode(60, root);
  addNode(80, root);
  addNode(81, root);
  addNode(10, root);
  addNode(25, root);
  addNode(82, root);
  printf("Inorder traversal\n");
  inorder(root);
  // printf("Preorder traversal\n");
  // preorder(root);
  // struct Node *temp = findRightMost(root);
  // printf("\nRightmost:%d\n", temp->data);
  findNode(root, 25, &searched_node);
  if (searched_node)
    printf("\nFound data:%d", searched_node->data);
  delete (root, 40);
  printf("\nInorder traversal\n");
  inorder(root);
  printf("\n");
}
