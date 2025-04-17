#include <stdio.h> 
unsigned mgRow,mgColumn; 
  main() 	 
{ 	
 
     printf("\n\t\t______________________________"); 
     printf("\n\t\tThis is sample Practical No.10\n\n"); 
    
	for(mgRow=1;mgRow<=16;mgRow++) 
{ 
   	 for(mgColumn=1;mgColumn<=16;mgColumn++) 
{ 
if((mgRow+mgColumn)%2==0) {printf("%c%c",219,219);}
 
else{   
    printf("%c%c",32,32);}
	} 	 	 	 
printf("\n"); 
} 	 	 	
return 0; 	 	 	 
 }


