//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node *left;
  struct Node *right;

  Node(int x)
  {
    data = x;
    left = right = NULL;
  }
};

int countUtil(Node *root, int* count, int x){
  if(!root)
    return 0;
  int ls = countUtil(root->left,count,x);
  int rs = countUtil(root->right,count,x);
  int sum = ls + rs + root->data;
  if(sum==x)
    (*count)++;
  return sum;
}

int countSubtreesWithSumX(Node *root, int x){
  if (!root)
	    return 0;
  int count = 0;
  int ls = countUtil(root->left,&count,x);
  int rs = countUtil(root->right,&count,x);
  if((ls+rs+root->data)==x)
    count++;
  return count;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    map<int, Node *> m;
    int n;
    cin >> n;
    struct Node *root = NULL;
    struct Node *child;
    while (n--)
    {
      Node *parent;
      char lr;
      int n1, n2;
      cin >> n1 >> n2 >> lr;
      if (m.find(n1) == m.end())
      {
        parent = new Node(n1);
        m[n1] = parent;
        if (root == NULL)
          root = parent;
      }
      else
        parent = m[n1];
      child = new Node(n2);
      if (lr == 'L')
        parent->left = child;
      else
        parent->right = child;
      m[n2] = child;
    }
    int x;
    cin >> x;
    cout << countSubtreesWithSumX(root, x) << endl;
  }
  return 0;
}