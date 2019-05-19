#include<stdio.h>
#include<stdlib.h>
int main(){
  int x = 20;
  int *ptr = &x;
  // printf("x=%x\n*x=%p\n",&x,ptr);
  printf("Value stored in x=%d\n",x);
  // printf("Address of x=%u\n",&x);
  // printf("Address of x=%p\n",ptr);
  printf("test:%d\n",*ptr);
}