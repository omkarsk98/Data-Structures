#include <iostream>
using namespace std;
int top = -1;

void push(int stack[], int value, int size)
{
  if (top == size - 1)
    cout << "No space left. Cant add "<<value<<".\n";
  else
  {
    top++;
    stack[top] = value;
  }
}

void pop()
{
  if (top < 0)
    cout << "Stack empty\n";
  else
    top--;
}

int stackSize(int stack[])
{
  return top + 1;
}

void printStack(int stack[])
{
  cout << "Stack in top down sequence: ";
  int size = stackSize(stack);
  // cout<<stack[0];
  for (int i = size-1; i >= 0; i--)
    cout << stack[i] << " ";
  cout << "\n";
}

int main()
{
  int stack[10]; //array of size 10;
  int size = sizeof(stack) / sizeof(stack[0]);
  // push(stack, 20, size);
  // push(stack, 30, size);
  // push(stack, 35, size);
  // push(stack, 120, size);
  // push(stack, 310, size);
  // push(stack, 351, size);
  // push(stack, 201, size);
  // push(stack, 130, size);
  // push(stack, 135, size);
  // push(stack, 201, size);
  // push(stack, 320, size);
  // push(stack, 359, size);
  pop();
  printStack(stack);
}