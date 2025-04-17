#include <stdio.h> 
#include <conio.h> 
 
float percentageCalculator(float,int); 	 
 
float mgBasicPay,medicalAllowance,conveyanceAllowance,houseRent,gpFund,grossPay,netPay; 
 	 
 main() 	 	 	
 {
printf("\n\t\t______________________________"); 
printf("\n\t\tThis is sample Practical No.15");
  printf("\n\n");   	
 
printf("\n\t Enter Basic Pay ? "); 
scanf("%f",&mgBasicPay); 
  
medicalAllowance=percentageCalculator(mgBasicPay,25);
conveyanceAllowance=percentageCalculator(mgBasicPay,20); 
houseRent=percentageCalculator(mgBasicPay,45);
gpFund=percentageCalculator(mgBasicPay,7); 
 
grossPay=mgBasicPay+medicalAllowance+conveyanceAllowance+houseRent; netPay=grossPay-gpFund; 
 
printf("\n\t BASIC PAY= %.2f",mgBasicPay); 
printf("\n\t MEDICAL ALLOWANCE= %.2f",medicalAllowance); 
printf("\n\t Conveyance Allowance= %.2f",conveyanceAllowance); 
printf("\n\t House Rent= %.2f",houseRent); 
 
printf("\n\t Gross Pay= %.2f",grossPay); printf("\n\t Deduction of GPFund= %.2f",gpFund); 
 
printf("\n\t Net Pay= %.2f",netPay); 
 
getch(); 	 	 
}
 	 	 
float percentageCalculator(float amount,int percent) 
{ 	 	
return (amount*percent/100.0); 
} 	 	

