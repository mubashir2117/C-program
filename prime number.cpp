#include <stdio.h>  
int makNum,divisor,flag;  
	main()  	  	  	  
	{  	  	  	  	 
 printf("\n______________________________");  
 printf("\n This is sample Practical No.10\n\n");  
 
printf("\n Enter Number to check whether is PRIME OR NOT? ");  
scanf("%d",&makNum); 
 flag=0;  
 for(divisor=makNum/2;divisor>=2;divisor--)  
{  
if(makNum%divisor==0) {
flag=1;
printf("%d absolutely divide %d",divisor,makNum); break;}  
}  
if(flag==0) 
printf("\n\t Given Number %d is PRIME number",makNum); 
 else  
printf(",Hence given Number %d is NOT a prime number",makNum);
   return 0; 
} 

