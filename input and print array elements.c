#include<stdio.h>
int main(){
	
  int a[5] = {10,20,30,40,50};
  
   int *b[5];
   int i;
   for(i=0; i<=4; i++)  {
   	
   	b[i]=&a[i];
   	
   	printf("%u => %d \n",b[i], *b[i]);
   } 
	return 0;
}


