 
#include <stdio.h> 
#include <conio.h> 
 
int makRow,makCol; 
 	  
  main() 	 	 
 { 	 	 	 	 
printf("\n\t\t______________________________"); 
printf("\n\t\tThis is sample Practical No.11"); 
printf("\n\n");   	// printf two line gap on screen. 
 
for(makRow=1;makCol<=5;makRow++) 
{ 
printf("\n\t\t\t");  	 	// printing line and tab gap on screen. 
for(makCol=1;makCol<=makRow;makCol++) 
{ printf(" *"); 
} 	 	 	
} 	 	 	
return 0; 
} 	 	

