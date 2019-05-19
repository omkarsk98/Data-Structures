#include <stdio.h>
#include <stdlib.h>

struct node
{
  char data;
  struct node *left;
  struct node *right;
};

struct node *root = NULL;
struct node *curr = NULL;

int search(char array[], int start, int end, char key)
{
  // returns the index of the required value
  for (int i = start; i < end; i++)
  {
    if (array[i] == key)
      return i;
  }
}

struct node *buildTree(char inorder[], char preorder[], int in_start, int in_end)
{
  static int preorder_index = 0;
  if (in_start > in_end)
    return NULL;
  struct node *new = (struct node *)malloc(sizeof(struct node));
  new->data = preorder[preorder_index++];
  if (in_start == in_end)
    return new;
  int in_index = search(inorder, in_start, in_end, new->data);
  new->left = buildTree(inorder, preorder, in_start, in_index - 1);
  new->right = buildTree(inorder, preorder, in_index + 1, in_end);
  return new;
}

void printInorder(struct node *node)
{
  if (node == NULL)
    return;

  printInorder(node->left);
  printf("%c ", node->data);
  printInorder(node->right);
}

int main()
{
  char inorder[] = {'D', 'B', 'E', 'A', 'F', 'C'};
  char preorder[] = {'A', 'B', 'D', 'E', 'C', 'F'};
  int size = sizeof(inorder) / sizeof(inorder[0]);
  root = buildTree(inorder, preorder, 0, size);
  printf("Inorder traversal of the constructed tree is \n");
  printInorder(root);
  printf("\n");
}