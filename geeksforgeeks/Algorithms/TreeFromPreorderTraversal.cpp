#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
};
struct Node *newNode(int data)
{
  Node *temp = new Node;
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}
void printInorder(struct Node *node)
{
  if (node == NULL)
    return;
  printInorder(node->left);
  printf("%d ", node->data);
  printInorder(node->right);
}

Node *constructTreeUtil(int pre[], char preLN[], int n, int *index)
{
  int indexptr = *index; // store the current value of index in pre[]
  if (indexptr == n)
    return NULL;
  Node *temp = newNode(pre[indexptr]);
  (*index)++;
  if (preLN[indexptr] == 'N')
  {
    temp->left = constructTreeUtil(pre, preLN, n, index);
    temp->right = constructTreeUtil(pre, preLN, n, index);
  }
  return temp;
}

Node *constructTree(int n, int pre[], char preLN[])
{
  int index = 0;
  return constructTreeUtil(pre, preLN, n, &index);
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    Node *root = NULL;
    int n;
    cin >> n;
    int pre[n];
    char preLN[n];
    for (int i = 0; i < n; i++)
      cin >> pre[i];
    for (int i = 0; i < n; i++)
      cin >> preLN[i];
    root = constructTree(n, pre, preLN);
    printInorder(root);
    cout << endl;
  }
  return 0;
}