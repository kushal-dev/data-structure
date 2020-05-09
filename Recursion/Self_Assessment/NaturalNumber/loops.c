#include <stdio.h>

int sum(int n){
	int i,s =0;
	for(i = 1 ;i<=n;i++){
		s+=i;
	}
	return s;
}
int main(){
	int n =10;
	printf("sum of first %d natural numbers is : %d \n",n,sum(n));
	return 0;
}
