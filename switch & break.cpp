#include <stdio.h> 
 
int makRow,makCol,result; 	 	// variable declaration. 
 
main() 	 	 	// main function.
 { 	 	 	 	// start of-(sof) body of main function. clrscr(); 
 	 	// below code is for showing heading of the output 
for(makRow=1;makRow<=8;makRow++) 
{ 
printf("\n");   	// printing line gap on screen. 
for(makCol=1;makCol<=8;makCol++) 
{ 
result=(makRow+makCol)%2; 
 
switch(result) 
{ 	 	 	// start of switch(result) body. 
case 0:printf("  ");break; default:printf("%c%c",219,219); // Ascii code of  ¦  is 219 can also be used. 
} 	 	 	// end of switch(result)-statement . 
 
} 	 	 	// end of for column loop. 
} 	 	 	// end of for row loop. 
 

} 	 	// end of-(eof) body of main function. 


