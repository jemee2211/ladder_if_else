#include<stdio.h>
main(){
	
	int a,b,c;
	
	printf("Enter Value A:");
	scanf("%d",&a);
	
	printf("Enter Value B:");
	scanf("%d",&b);
	
	printf("Enter Value C:");
	scanf("%d",&c);
	
	a>b
	?
	   a>c
	   ?
	       printf("A is MAX")
	   :
	   	printf("c is MAX")
	:b>c
	?
	printf("B is MAX")
	:
	printf("C is MAX");	
	
}
