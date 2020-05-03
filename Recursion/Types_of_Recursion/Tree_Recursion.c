#include <stdio.h>
/*
 * Space Complexity will be in tree is O(n)
 * Time Complexity is O(2^n)
 * number  of calls are (2^(n+1) -1)
 * so if the n = 3 then, calls will be 15 
 * so, we can also say that if fun(n-1) is increased we can formulate make a formula as
 * no. of calls as ((m^(n+1)-1)/(m-1))--> m = no. of fun i.e 2 for the following program
 * where m = no. of function calls
 * n = value what is passed initially
 * eg. fun called 2 times and n = 3 then the number of calls will be 15
 * eg. fun called 4 times and n =3 then the number of calls will be 85
 * */
static int count =0;

int fun(int n){
		count++;
	if(n>0){
		printf("%d ",n);
		fun(n-1);
		fun(n-1);
		fun(n-1);
		fun(n-1);
	}
	
}
int main(){
	fun(3);
	printf("\nno. of nodes is :%d \n",count);
	return 0;
}
