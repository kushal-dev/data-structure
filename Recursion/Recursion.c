#include <stdio.h>

void fun1(int x){
	if(x>0){
		fun1(x-1); //will print on returning time eg. 1,2,3
		printf("%d ",x);
	}
}

void fun2(int x){
	if(x>0){
		printf("%d ",x);// will print on ascending time eg. 3,2,1
		fun2(x-1);
	}
}
int main(){
	fun1(3);
	printf("\n");
	fun2(3);
	printf("\n");
	return 0;
}
