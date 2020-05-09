#include <stdio.h>

int fact(int n){
	int factorial = 1,i=0;
	for(i=1;i<=n;i++){
		factorial *=i;
	}
	return factorial;
}	
int main(){
	int n =6;
	printf("factorial for %d is %d \n",n,fact(n));
	return 0;
}
