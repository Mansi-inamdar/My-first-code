#include  <stdio.h>
int  main () {
	   
	int num;
	  
	  printf("enter the number");
	  scanf("%d", &num);
	  
	  if(num%3==0){
	  	printf("num is divisible by 3");
	  }else if(num%5==0){
	  	printf("num is divisible by 5");
	  }else if (num%15==0){
	  printf("num is divisible by 3 and 5");
	     }else{
       	printf("no. is neither divisible by  3 or 5");
       	
	   }
	return 0;
}
