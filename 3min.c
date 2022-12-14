#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("Enter Value A :");
	scanf("%d",&a);
	
	printf("Enter Value B :");
	scanf("%d",&b);
	
	printf("Enter Value C :");
	scanf("%d",&c);
	
	if(a<b){
		
		if(a<c){
			
			printf("A is MIN ");
		}
		else{
			
			printf("C is MIN");
			
		}
	}
	else{
		if(b<c){
			
			printf("B is MIN");
		}
		else{
			
			printf("C is MIN");
		}
		
	}
	
	
}
