#include <stdio.h>

int sum(int n){
	if(n==0){
		return 0;
	}
	else
		return sum(n-1)+n;
}

int main(){
	int n =10;
	printf("sum of first %d natural number : %d\n",n,sum(10));
	return 0;
}
