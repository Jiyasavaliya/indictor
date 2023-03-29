#include<stdio.h>
void swap(int *a, int *b){

	int c;

	 c = *a;
	*a = *b;
	*b =  c;
	
	printf("after sawp A : %d\n",*a);
	printf("after sawp B : %d\n",*b);
}

int main(){
	
	int a=88;
	int b=11;
	
	swap(&a,&b);
	return 0;
}

