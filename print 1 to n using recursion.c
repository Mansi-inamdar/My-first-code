//printing 1 to n using recursion.
#include<stdio.h>
void numbers(int n){
	int i;
	if(n==0){
		return;	
	}
  	numbers(n-1);
  	printf("%d\n",n);
	
}
void main(){
	int n,i;
	printf("enter the n:");
	scanf("%d",&n);
	numbers(n);
	
}
