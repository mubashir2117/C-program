#include <stdio.h>  
#include <string.h>  
  
unsigned long factorial; 
	int multiple;   	  	  
	main()  	  	  	 
 { 
printf("\n______________________________"); 
 printf("\n This is sample Practical No.7\n");   	  	  
 	 printf("\n Enter any  number to find it's factorial ? ");
	    scanf("%lud",&factorial); 
		 printf("\n you enter number %lu whose factorial is  ", factorial);  
 
for(multiple=factorial-1;multiple>=1;multiple--)  
{ 
factorial*=multiple; 
}  
printf(" %lu ",factorial);  
return 0; 
} 

