#include <stdio.h>
#include <math.h>
int main() {
	//code
	int t;
  scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    float r = (float)((float)b/(float)a);
      printf("r=%f\n",r);
	    int n;
	    scanf("%d",&n);
	    float nthTerm = a*pow(r,n-1);
	    printf("%d\n",(int)nthTerm);
	}
	return 0;
}