#include <stdio.h>

int pow(int m,int n){
	if(n==0)
		return 1;
	else
		return pow(m,n-1)*m;
}

int main(){
	int m=2,n=3;
	printf("exponential of %d ^ %d is %d\n",m,n,pow(m,n));
	return 0;
}
