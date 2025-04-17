#include <stdio.h> 
#include <conio.h> 
 
void sum1(int,int); 	 
 	// function sum1 declaration. 
int number1,number2; 
 	// variable declaration. 
 main() 	 	 	// main function. 
{ 	 	 	 	// start of-(sof) body of main function. 
 
 	 	// below code is for showing heading of the output 
printf("\n\t\t______________________________");
 printf("\n\t\tThis is sample Practical No.14"); 
 printf("\n\n");   	// printf two line gap on screen. 
 
printf("\n\t Enter Number1 ? "); 
scanf("%d",&number1); 
 
printf("\n\t Enter Number2 ? "); 
scanf("%d",&number2); 
 
sum1(number1,number2); 	// calling sum1 function & passing number1 & number2 to it. 
 
 
getch(); 	 	 	// pause screen till any button is pressed. 
} 	 	// end of-(eof) body of main function. 
 
 
 	 	// below is the definition of function sum1. 
void sum1(int digit1,int digit2) 
{ 	 	 	// start of sum1 function body. 
printf("\n\t Sum of %d + %d = %d",digit1,digit2,(digit1+digit2)); return; 
} 	 	 	// end of sum1 function body. 
 

