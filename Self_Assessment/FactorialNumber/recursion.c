#include <stdio.h>

int fact(int n){
	if(n==0)
		return 1;
	else
		return (fact(n-1)*n);
}

int main(){
	int n =6;
	printf("Factorial of number %d is %d \n",n,fact(n));
	return 0;
}
