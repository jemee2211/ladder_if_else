#include<stdio.h>
main(){

	int a,b,c,d,e;
	
	printf("Enter Value A :");
	scanf("%d",&a);
	
	printf("Enter Value B :");
	scanf("%d",&b);
	
	printf("Enter Value C :");
	scanf("%d",&c);
	
	printf("Enter Value D :");
	scanf("%d",&d);
	
	printf("Enter Value E :");
	scanf("%d",&e);
	
	a>b
		?a>c
			?a>d
				?a>e
					:printf("A is MAX ")
				
				:
					
		        	printf("E is MAX ")
				
				
			
			:
			    d>e
			    ?
			   	     printf("D is MAX ")
			   
			   :
			   	printf("E is MAX ")
			   
			
		
		:
			c>d
			?
				c>e
				?
					printf("C is MAX ")
				
				:
					printf("E is MAX ")
				
			
			:
				?d>e
					printf("D is MAX ")
				:
					
					printf("E is MAX ")
				
			
		
	
	:
		?b>c
			?b>d
				? b>e
					printf("B is MAX ")
				
				:
				    printf("E is MAX ")	
				
			
			:
			    ? d>e
			    	printf("D is MAX ")
			    	
				
				:
					printf("E is MAX ")
				
			
		
		:
			? c>d
				? c>e
					printf("C is MAX ")
				
			    
			    	printf("E is MAX ")
					
			
			:
				? d>e
				printf("D is MAX ")	
				
				:
					printf("E is MIN ");
				
			
			
		
		
	
}
