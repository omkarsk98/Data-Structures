#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int j=0;j<n;j++)
      scanf("%d",&array[j]);
    int min = 2147483647, max=0;
    for (int j=0;j<n;j++){
      if(min>array[j])
        min = array[j];
      if(max<array[j])
        max = array[j];
    }
    printf("%d %d\n",min, max);
  }
  return 1;
}