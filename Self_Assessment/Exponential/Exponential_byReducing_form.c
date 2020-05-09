/*
eg. if m =2 , n=9

then, m*m*m*m*m*m*m*m*m;
also return as m*m*m*...(m-1)*m;
so it should be "return pow(m,n-1)*m;
but we can still reduce few efforts and space
if 2^9 can be written as 2*(2^4),
2*(2^4) can be written as 2*((2^2)^2)

for odd ---> (m*pow((m*m),(n-1)/2))
for even --> pow(m*m,n/2)
*/
#include <stdio.h>
int pow(int m,int n){

	if(n==0)
		return 1;
	if(n%2==0)
		return pow(m*m,n/2);
	else
		return m*(pow(m*m,(n-1)/2));
}

int main(){
	int m =2,n =9;
	printf("power of %d and %d is %d\n",m,n,pow(m,n));
	return 0;
}
