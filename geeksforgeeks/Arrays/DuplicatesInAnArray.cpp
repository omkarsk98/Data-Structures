#include <bits/stdc++.h>
using namespace std;
void printDuplicates(int arr[], int n);
int main()
{
  int t;
  cin>>t;
  while(t-- > 0){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		printDuplicates(a, n);
		cout<<endl;
  }
  return 0;
}
void printDuplicates(int arr[], int n)
{
   //add code here.
}