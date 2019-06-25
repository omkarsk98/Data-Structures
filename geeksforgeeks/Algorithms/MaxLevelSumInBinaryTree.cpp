#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
};
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node *newNode(int data)
{
  struct Node *node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return (node);
}
/* Computes the number of nodes in a tree. */
int height(struct Node *node)
{
  if (node == NULL)
    return 0;
  else
    return 1 + max(height(node->left), height(node->right));
}

int maxLevelSum(Node *root)
{
  /* Function to get diameter of a binary tree */
  if (!root)
    return 0;
  queue<Node *> q;
  int result = root->data;
  q.push(root);
  while (!q.empty())
  {
    int count = q.size();
    int sum = 0;
    while (count--)
    {
      Node *temp = q.front();
      q.pop();
      sum = sum + temp->data;
      if (temp->left != NULL)
        q.push(temp->left);
      if (temp->right != NULL)
        q.push(temp->right);
    }
    result = sum > result ? sum : result;
  }

  return result;
}

void inorder(Node *root)
{
  if (root == NULL)
    return;
  inorder(root->left);
  printf("%d ", root->data);
  // cout<<root->data<<" ";
  inorder(root->right);
}
/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    map<int, Node *> m;
    int n;
    scanf("%d", &n);
    struct Node *root = NULL;
    struct Node *child;
    while (n--)
    {
      Node *parent;
      char lr;
      int n1, n2;
      scanf("%d %d %c", &n1, &n2, &lr);
      if (m.find(n1) == m.end())
      {
        parent = newNode(n1);
        m[n1] = parent;
        if (root == NULL)
          root = parent;
      }
      else
        parent = m[n1];
      child = newNode(n2);
      if (lr == 'L')
        parent->left = child;
      else
        parent->right = child;
      m[n2] = child;
    }
    printf("%d\n", maxLevelSum(root));
    // cout<<maxLevelSum(root) << endl;
  }
  return 0;
}