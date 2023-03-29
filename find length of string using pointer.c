#include<stdio.h>
main()
{
	int a[6]= {24,53,67,25,54,37};
    
	int *b[5];
	
	int length;
	
	for(int i=0; i<1; i++){
	
	
		length = sizeof(a) / sizeof (int); 
	      
		  b[i]=&a[length];
	      
	      printf("%u => %d\n",b[i] ,*b[i]);
}
}
	
	
	
	
	
	
			
